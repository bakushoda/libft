/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:54:21 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/25 14:48:23 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_isalpha(int c);

// int	main(void) {
// 	int	c = 'A';
// 	int	b;

// 	b = ft_isalpha(c);
// 	printf("%d", b);
// 	return (0);
// }

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}