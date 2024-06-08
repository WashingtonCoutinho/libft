/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:27:45 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/08 19:51:29 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <stdlib.h> */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*memc;

	memc = (unsigned char *)s;
	if (!n)
		return (NULL);
	while (n)
	{
		if (*memc == (unsigned char)c)
			return ((void *)memc);
		memc++;
		n--;
	}
	return (NULL);
}

/* int main(void)
{
	char *str;

	str = ft_memchr("bonjour", 'o', 7);
	printf("%s\n", str);
	return (0);
} */
