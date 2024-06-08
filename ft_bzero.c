/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:27:04 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/02 01:19:27 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = '\0';
}

/* int main(void)
{
	char str[] = "Testing this";
	int i = 0;

	printf("[STRING BEFORE] ft_bzero\t %s\n", str);
	// Looping and printing each memory position
	printf("[ORIGINAL]\t[%p]\n[MEMORY]\t[", str);
	while(i <= sizeof(str))
	{
		printf("%d", str[i]);
		if (i == sizeof(str) - 1)
		{
			printf("]\n");
			break ;
		}
		printf(" | ");
		i++;
	}

	// Applying bzero
	ft_bzero(str, 3);
	printf("[STRING]\t[%s]\n\n", str);
	printf("[MODIFIED]\t[%p]\n[MEMORY]\t[", str);
	i = 0;
	while(i <= sizeof(str))
	{
		printf("%d", str[i]);
		if (i == sizeof(str) - 1)
		{
			printf("]\n");
			break ;
		}
		printf(" | ");
		i++;
	}
	printf("[STRING AFTER] ft_bzero:\t [%s]\n", str);
	return (0);
} */
