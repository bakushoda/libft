/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:56:43 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/28 22:16:29 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include <stdio.h>

// int	ft_strncmp(const char *s1, const char *s2, size_t n);

// int	main(void)
// {
// 	char	s1[] = "abcde";
// 	char	s2[] = "abccc";
// 	size_t	n = 4;
// 	int		result;

// 	result = ft_strncmp(s1, s2, n);
// 	printf("%d", result);
// 	return (0);
// }

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
