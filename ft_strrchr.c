/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:23:38 by bshoda            #+#    #+#             */
/*   Updated: 2026/05/11 20:58:01 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strrchr(const char *str, int c);

// int	main(void)
// {
// 	char	str[] = "hello";
// 	int		c = 'l';
// 	char	*result;

// 	result = ft_strrchr(str, c);
// 	write(1, result, 1);
// 	return (0);
// }

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = NULL;
	while (str[i])
	{
		if (str[i] == c)
		{
			last = (char *)&str[i];
		}
		i++;
	}
	if (str[i] == c)
	{
		return ((char *)&str[i]);
	}
	return (last);
}
