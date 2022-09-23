/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:26:17 by marias-e          #+#    #+#             */
/*   Updated: 2022/09/22 11:18:11 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	i;
	size_t	s;

	n = 0;
	i = 0;
	s = 0;
	while (dst[n] != 0)
		n++;
	while (src[s] != 0)
		s++;
	if (dstsize <= n)
		return (s + dstsize);
	while ((src[i] != 0) && ((n + i) < (dstsize - 1)))
	{
		dst[n + i] = src[i];
		i++;
	}
	dst[n + i] = 0;
	return (n + s);
}
