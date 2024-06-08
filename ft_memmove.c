/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:08:01 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/08 16:21:11 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n--)
		d[n] = s[n];
	return (dst);
}
/*
int	main(void)
{
	char	str[] = "Quisque viverra lectus arcu.";
	char	dst[sizeof(str)];

	printf("ORIGINAL:\t[%s]\n", str);
	printf("MODIFIED:\t[%s]\n", (char *)ft_memmove(dst, str, sizeof(str)));
	return (0);
}*/
