/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:48:38 by marias-e          #+#    #+#             */
/*   Updated: 2022/09/22 10:52:10 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			**ft_aux_array(char *s, char c);

static unsigned int	ft_aux_delim(unsigned int n, char c, char const *s);

static unsigned int	ft_aux_count(unsigned int n, char c, char const *s);

char	**ft_split(char const *s, char c)
{
	unsigned int	w;
	unsigned int	n;
	unsigned int	i;
	unsigned int	j;
	char			**array;

	w = 0;
	n = 0;
	array = ft_aux_array((char *)s, c);
	while (s[n])
	{
		j = 0;
		n = ft_aux_delim(n, c, s);
		i = ft_aux_count(n, c, s);
		if (i == 0)
		{
			array[w] = 0;
			return (array);
		}
		array[w] = (char *) malloc((i + 1) * sizeof(char));
		while (s[n] != s[n + i])
		{
			array[w][j] = s[n];
			n++;
			j++;
		}
		array[w][j] = 0;
		w++;
	}
	return (0);
}

static unsigned int	ft_aux_delim(unsigned int n, char c, char const *s)
{
	while (s[n] && s[n] == c)
		n++;
	return (n);
}

static unsigned int	ft_aux_count(unsigned int n, char c, char const *s)
{
	unsigned int	i;

	i = 0;
	while (s[n] && s[n] != c)
		n++;
		i++;
	return (i);
}

static char	**ft_aux_array(char	*s, char c)
{
	unsigned int	n;
	unsigned int	i;
	unsigned int	w;
	char			**array;

	n = 0;
	w = 0;
	while (s[n])
	{
		i = 0;
		w++;
		n = ft_aux_delim(n, c, s);
		i = ft_aux_count(n, c, s);
		n = n + i;
	}
	array = (char **) malloc(w * sizeof(char *));
	return (array);
}

int	main(void)
{
	char	**array = ft_split("FFHolaFwenosFdiaFF", 'F');
	printf("%s", array[1]);
	return (0);
}
