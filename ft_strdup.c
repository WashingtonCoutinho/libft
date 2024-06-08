/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:33:09 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/08 19:01:16 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;

	sdup = (char *)malloc(ft_strlen(s) + 1);
	if (!sdup)
		return (0);
	ft_memcpy(sdup, s, ft_strlen(s) + 1);
	return (sdup);
}
/*
int	main(void)
{
	char	*str = "Dblabla uhueuhue blabla.";

	printf("ORIGINAL:\t[%s]\n", str);
	printf("DUPLICATE:\t[%s]\n", ft_strdup(str));
	return (0);
}*/
