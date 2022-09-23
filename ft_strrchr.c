/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:27:44 by marias-e          #+#    #+#             */
/*   Updated: 2022/09/14 12:17:33 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		n;
	int		i;

	i = -1;
	n = 0;
	str = (char *)s;
	while (str[n] != 0)
	{
		if (str[n] == c)
			i = n;
		n++;
	}
	if (c == 0)
		return (str + n);
	if (i != -1)
		return (str + i);
	return (0);
}
