/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wada-sil <wada-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:16:57 by wada-sil          #+#    #+#             */
/*   Updated: 2024/06/08 16:19:55 by wada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	str = (char *)s;
	if (c == 0)
		return (str + size);
	while (size)
	{
		if (str[size - 1] == (unsigned char)c)
			return (str + size - 1);
		size--;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*str = "Aenean mattis non nunc vel cursus.";
	int	ch = 'v';

	printf("STRING:\t[%s]\n", str);
	printf("CHAR:\t[%c]\n", ch);
	printf("RESULT:\t[%s]\n", ft_strrchr(str, ch));
	return (0);
}*/
