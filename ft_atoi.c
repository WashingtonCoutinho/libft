/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:27:13 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/08 17:37:45 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*c >= 9 && *c <= 13) || *c == 32)
		c++;
	if (*c == 45)
		sign = -1;
	if (*c == 43 || *c == 45)
		c++;
	while (*c >= 48 && *c <= 57)
	{
		result = result * 10 + *c - '0';
		c++;
	}
	return (sign * result);
}

/* int main(void)
{
	char c[] = " ----+-+12345ab75";
	printf("Here is the result converted to int: %d\n", ft_atoi(c));
} */
