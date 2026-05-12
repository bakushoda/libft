/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 14:27:54 by bshoda            #+#    #+#             */
/*   Updated: 2026/05/09 15:07:32 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_putchar_fd(char c, int fd);

// int	main(void)
// {
// 	char	c;
// 	int		fd;

// 	c = 'a';
// 	fd = 1;
// 	ft_putchar_fd(c, fd);
// 	return (0);
// }

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
