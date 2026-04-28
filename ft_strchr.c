/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:19:11 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/28 20:53:01 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strchr(char *str, int c);

// int	main(void)
// {
// 	char	str[] = "hello";
// 	char	c = 'e';
// 	char	*result;

// 	result = ft_strchr(str, c);
// 	printf("%s", result);
// 	return (0);
// }

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (&str[i]);
		}
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}
