/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:48:57 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/09 18:54:28 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;
	size_t strlen;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (start >= strlen)
	{
		return (ft_strdup(""));
	}
	if (len > strlen - start)
		len = strlen - start;
	tmp = malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/*
int	main(void)
{
	char	*str = "Pellentesque elementum ligula sem.";

	printf("ORIGINAL:\t[%s]\n", str);
	printf("SUBSTRING:\t[%s]\n", ft_substr(str, 3, 6));
	return (0);
}*/
