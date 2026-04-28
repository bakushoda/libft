/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 20:31:32 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/28 20:00:19 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// size_t	ft_strlcat(char *dst, char *src, size_t size);

// int	main(void)
// {
// 	char	dst[10] = "hello";
// 	char	src[] = "world";
// 	size_t	size;

// 	size = 5;
// 	ft_strlcat(dst, src, size);
// 	return (0);
// }

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst_len < size && dst[dst_len])
	{
		dst_len++;
	}
	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	if (dst_len == size)
	{
		return (size + src_len);
	}
	i = 0;
	while (src[i] && (dst_len + i < size - 1))
	{
		dst[dst_len + i] = src[i];
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
