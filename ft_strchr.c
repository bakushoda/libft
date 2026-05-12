/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:19:11 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/28 21:21:31 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	str[] = "hello";
// 	char	c = 'e';
// 	char	*result;

// 	result = ft_strchr(str, c);
// 	printf("%s", result);
// 	return (0);
// }

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char)c;
	while (str[i])
	{
		if ((unsigned char)str[i] == uc)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if ((unsigned char)str[i] == uc)
		return ((char *)&str[i]);
	return (NULL);
}
