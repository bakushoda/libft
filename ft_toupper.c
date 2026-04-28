/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:09:43 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/28 20:17:21 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_toupper(int c);

// int	main(void)
// {
// 	int	c = 'a';

// 	c = ft_toupper(c);
// 	printf("%d", c);
// 	return (0);
// }

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 'a' - 'A';
	}
	return (c);
}
