/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:45:05 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/08 16:45:10 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (big[i + j] == '\0' && little[j] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		if (!little[j])
			return ((char *)big + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	big[13] = "TestingThis";
	const char	little[4] = "ing";

	printf("The substring is: %s\n", ft_strnstr(big, little, 15));
	printf("The substring is: %s\n", strnstr(big, little, 15));
	return (0);
} */
