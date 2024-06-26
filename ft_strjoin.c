/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:14:13 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/08 16:21:21 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size1;
	size_t	size2;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	str = malloc(size1 + size2 + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, size1 + 1);
	ft_strlcat(str, s2, size1 + size2 + 1);
	return (str);
}
/*
int	main(void)
{
	char	*str1 = "Curabitur quis porttitor quam. ";
	char	*str2 = "Quisque vulputate tristique massa.";

	printf("STRING 1:\t[%s]\n", str1);
	printf("STRING 2:\t[%s]\n", str2);
	printf("RESULT:\t\t[%s]\n", ft_strjoin(str1, str2));
	return (0);
}*/
