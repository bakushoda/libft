/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:23:38 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/28 21:46:33 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
			last = &str[i];
		}
		i++;
	}
	if (str[i] == c)
	{
		return (&str[i]);
	}
	return (last);
}
