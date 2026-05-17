/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 13:24:37 by bshoda            #+#    #+#             */
/*   Updated: 2026/05/17 20:40:30 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			count_words(char const *s, char c);
static int			count_character(char const *s, char c);
static char const	*char_insert(char const *s, char c, char *array);
static char			**free_array(char **array, int i);

// int	main(void)
// {
// 	char	**array;
// 	int		i;

// 	array = ft_split("hello world brazil", ' ');
// 	if (!array)
// 		return (1);
// 	i = 0;
// 	while (array[i])
// 	{
// 		printf("%s\n", array[i]);
// 		free(array[i]);
// 		i++;
// 	}
// 	free(array);
// 	return (0);
// }

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**array;
	int		i;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	array = malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	array[count] = NULL;
	i = 0;
	while (i < count)
	{
		array[i] = malloc(sizeof(char) * (count_character(s, c) + 1));
		if (!array[i])
			return (free_array(array, i));
		s = char_insert(s, c, array[i]);
		i++;
	}
	return (array);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static int	count_character(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

static char const	*char_insert(char const *s, char c, char *array)
{
	while (*s == c)
		s++;
	while (*s && *s != c)
	{
		*array = *s;
		array++;
		s++;
	}
	*array = '\0';
	return (s);
}

static char	**free_array(char **array, int i)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
	return (NULL);
}
