/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:25:04 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/25 18:34:06 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include <stdio.h>

// void	*ft_memset(void *a, int b, size_t len);

// int	main(void)
// {
// 	char	str[] = "hello";

// 	ft_memset(str, 'x', 5);
// 	printf("%s", str);
// 	return (0);
// }

void	*ft_memset(void *a, int b, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)a;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)b;
		i++;
	}
	return (a);
}
