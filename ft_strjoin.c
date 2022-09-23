/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:36:37 by marias-e          #+#    #+#             */
/*   Updated: 2022/09/21 17:07:06 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	n1;
	unsigned int	n2;
	char			*str;

	n1 = ft_strlen(s1);
	n2 = n1 - 1 + ft_strlen(s2);
	str = (char *) malloc(n2 + 2);
	if (!str)
		return (0);
	n2 = 0;
	while (n2 < n1)
	{
		str[n2] = s1[n2];
		n2++;
	}
	n1 = 0;
	while (s2[n1])
	{
		str[n2] = s2[n1];
		n2++;
		n1++;
	}
	str[n2] = s2[n1];
	return (str);
}
