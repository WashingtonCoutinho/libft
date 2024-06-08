/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:27:56 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/08 16:21:07 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (n > i)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[] = "Ut in imperdiet leo.";
	int	ch = '\\';

	printf("ORIGINAL:\t[%s]\n", str);
	printf("MODIFIED:\t[%s]\n", (char *)ft_memset(str, ch, strlen(str)));
	return (0);
}*/
