/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:04:11 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/08 16:52:22 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}
/*
int	main(void)
{
	void	*mem = ft_calloc(sizeof(char), 5);
	char	*nbr = (char *)mem;
	int	i;

	if (mem)
	{
		printf("[MEMORY ALLOCATED]\t[");
		while (i < (sizeof(char) * 5))
		{
			printf("%d", nbr[i]);
			if (i == (sizeof(char) * 5) - 1)
				break ;
			printf("|");
			i++;
		}
		printf("]\n");
	}
	else
		printf("[MEMORY ALLOCATION FAILURE]\n");
	free(mem);
	return (0);
}*/
