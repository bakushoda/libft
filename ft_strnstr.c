/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:43:50 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/29 11:29:37 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// int	main(void)
// {
// 	char	haystack[] = "hello world";
// 	char	needle[] = "hello";
// 	size_t	len;

// 	len = 5;
// 	ft_strnstr(haystack, needle, len);
// 	return (0);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
