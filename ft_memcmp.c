/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:27:48 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/08 16:43:17 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (n && *c1 == *c2)
	{
		c1++;
		c2++;
		n--;
	}
	if (!n)
		return (0);
	return (*c1 - *c2);
}

/* int	main(void)
{
	char *str1 = "This is a comp";
	char *str2 = "This is a stop";

	printf("First string:[%s]\n", str1);
	printf("Second string:[%s]\n", str2);
	printf("The difference is: [%d]\n", ft_memcmp(str1, str2, strlen(str1)));
	return (0);
} */
