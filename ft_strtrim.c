/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:21:33 by marias-e          #+#    #+#             */
/*   Updated: 2022/09/22 13:11:48 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_aux_front(char const *s, char const *set);

static int	ft_aux_back(char const *s, char const *set);

char	*ft_strtrim(char const *s, char const *set)
{
	char			*str;
	int				start;
	int				end;
	int				n;

	n = 0;
	start = ft_aux_front(s, set);
	end = ft_aux_back(s, set);
	if (end < 0)
	{
		str = (char *) malloc(1);
		if(!str)
			return(0);
		return (str);
	}
	str = (char *) malloc (end - start);
	if (!str)
		return (0);
	while (start <= end)
	{
		str[n] = s[start];
		n++;
		start++;
	}
	str[n] = 0;
	return (str);
}

static int	ft_aux_front(char const *s, char const *set)
{
	int	n;
	int	i;
	int	b;

	n = 0;
	b = 1;
	while (b && s[n])
	{
		i = 0;
		while (set[i] && set[i] != s[n])
		{
			i++;
		}
		if (set[i] == s[n])
			n++;
		else
			b = 0;
	}
	return (n);
}

static int	ft_aux_back(char const *s, char const *set)
{
	int	n;
	int	i;
	int	b;

	n = 0;
	if (!s)
		return (-1);
	while (s[n])
		n++;
	n--;
	b = 1;
	while (b && n >= 0)
	{
		i = 0;
		while (set[i] && set[i] != s[n])
		{
			i++;
		}
		if (set[i] == s[n])
			n--;
		else
			b = 0;
	}
	return (n);
}
