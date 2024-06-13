/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:24:29 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/13 18:02:46 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_split(char **split)
{
	size_t	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static void	ft_alloc(char **split, const char *s, char c)
{
	char		**chops;
	const char	*str;

	chops = split;
	str = s;
	while (*str)
	{
		while (*s == c)
			s++;
		str = s;
		while (*str && *str != c)
			str++;
		if (*str == c || str > s)
		{
			*chops = ft_substr(s, 0, str - s);
			if (!*chops)
				ft_free_split(split);
			s = str;
			chops++;
		}
	}
	*chops = NULL;
}

static size_t	ft_count_chops(const char *s, char c)
{
	size_t	chops;

	chops = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			chops++;
		while (*s && *s != c)
			s++;
	}
	return (chops);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_count_chops(s, c);
	split = (char **)malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	ft_alloc(split, s, c);
	return (split);
}

/* int	main(void)
{
	char const	*str;
	char		**split;
	int			i;

	str = "This is a test string to split";
	split = ft_split(str, ' ');
	if (split)
	{
		i = 0;
		while (split[i])
		{
			printf("%s\n", split[i]);
			free(split[i]);
			i++;
		}
		free(split);
	}
	return (0);
} */
