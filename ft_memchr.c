/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:26:33 by marias-e          #+#    #+#             */
/*   Updated: 2022/09/14 12:47:53 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	k;

	str = (unsigned char *)s;
	k = (unsigned char)c;
	while (str[0] != 0 && n)
	{
		if (str[0] == k)
			return (str);
		str++;
		n--;
	}
	if (k == 0 && n)
		return (str);
	return (0);
}
