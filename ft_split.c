/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 13:24:37 by bshoda            #+#    #+#             */
/*   Updated: 2026/05/02 16:45:33 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char		**ft_split(char const *s, char c);
int			count_words(char const *s, char c);
int			count_character(char const *s, char c);
char const	*char_insert(char const *s, char c, char *array);

int	main(void)
{
	char const	s[] = "hello world brazil";
	char		c = ' ';
	char		**array;
	int			i;

	array = ft_split(s, c);
	i = 0;
	while (*array)
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**array;
	int		char_count;
	int		i;

	count = count_words(s, c);
	array = malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	array[count] = NULL;
	i = 0;
	while (i < count)
	{
		char_count = count_character(s, c);
		array[i] = malloc(sizeof(char) * (char_count + 1));
		if (!array[i])
			return (NULL);
		s = char_insert(s, c, array[i]);
		i++;
	}
	return (array);
}

int	count_words(char const *s, char c)
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

int	count_character(char const *s, char c)
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

char const	*char_insert(char const *s, char c, char *array)
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
