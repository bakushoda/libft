/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:38:22 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/25 18:54:31 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include <stdio.h>

// void	ft_bzero(void *s, size_t n);

// int	main(void)
// {
// 	char	str[] = "hello";
// 	size_t	n;

// 	n = 5;
// 	ft_bzero(str, n);
// 	return (0);
// }

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
