/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:17:20 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/08 19:15:06 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	o;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	o = ft_strlen(s1) - 1;
	while (s1[o] && ft_strchr(set, s1[o]))
		o--;
	trim = ft_substr(s1, i, o - i + 1);
	return (trim);
}
/*
int	main(void)
{
	char	*str = "Este teste vai passar.";
	char	*cut = "Este";

	printf("STRING:\t[%s]\n", str);
	printf("TO CUT:\t[%s]\n", cut);
	printf("RESULT:\t[%s]\n", ft_strtrim(str, cut));
	return (0);
}*/
