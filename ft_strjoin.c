/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 21:53:43 by bshoda            #+#    #+#             */
/*   Updated: 2026/05/01 22:46:29 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// char		*ft_strjoin(char const *s1, char const *s2);
static char	*putstr(char *total, const char *s1, const char *s2);

// int	main(void)
// {
// 	char	s1[] = "hello";
// 	char	s2[] = "world";

// 	ft_strjoin(s1, s2);
// 	return (0);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*total;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	total = malloc(sizeof(char) * (i + j + 1));
	if (!total)
		return (NULL);
	total = putstr(total, s1, s2);
	return (total);
}

static char	*putstr(char *total, const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s1[i])
	{
		total[k] = s1[i];
		k++;
		i++;
	}
	j = 0;
	while (s2[j])
	{
		total[k] = s2[j];
		k++;
		j++;
	}
	total[k] = '\0';
	return (total);
}
