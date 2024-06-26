/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:27:43 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/09 18:36:57 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int n)
{
	if (n >= 32 && n <= 126)
	{
		return (1);
	}
	return (0);
}

/* int main(void)
{
	char str = 123;
	printf("%i\n", ft_isprint(str));
} */
