/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:41:48 by marias-e          #+#    #+#             */
/*   Updated: 2022/09/22 17:48:26 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			n;

	n = 0;
	str = (char *) malloc(len + 1);
	if (!str)
		return (0);
	while (n < len && s[start])
	{
		str[n] = s[start];
		n++;
		start++;
	}
	str[n] = 0;
	return (str);
}
