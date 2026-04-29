/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:27:21 by bshoda            #+#    #+#             */
/*   Updated: 2026/04/29 15:05:57 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

// char	*ft_strdup(char *str);

// int	main(void)
// {
// 	char	str[] = "hello";
// 	char	*result;

// 	result = ft_strdup(str);
// 	printf("%s", result);
// 	free(result);
// 	return (0);
// }

char	*ft_strdup(char *str)
{
	char	*p;
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	p = malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
