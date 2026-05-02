/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 12:10:11 by bshoda            #+#    #+#             */
/*   Updated: 2026/05/02 13:13:48 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include <stdio.h>
#include <stdlib.h>

// char			*ft_strtrim(char const *s1, char const *set);
static int		in_set(char c, const char *set);
static size_t	ft_strlen(const char *s1);

// int	main(void)
// {
// 	char const	s1[] = "xxhellox";
// 	char const	set[] = "x";
// 	char		*result;

// 	result = ft_strtrim(s1, set);
// 	printf("%s", result);
// 	return (0);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && in_set(s1[end - 1], set))
		end--;
	res = malloc(sizeof(char) * (end - start + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (start < end)
	{
		res[i] = s1[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

static int	in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_strlen(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}
