/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:49:35 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/25 15:05:00 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_isdigit(int a);

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 'a';
// 	b = ft_isdigit(a);
// 	printf("%d", b);
// 	return (0);
// }

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
