/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:30:13 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/29 10:43:04 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include <stdio.h>

// int	ft_memcmp(const void *s1, const void *s2, size_t n);

// int	main(void)
// {
// 	char	s1[] = "abcde";
// 	char	s2[] = "abcdd";
// 	size_t	n;
// 	int		result;

// 	n = 5;
// 	result = ft_memcmp(s1, s2, n);
// 	printf("%d", result);
// 	return (0);
// }

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
