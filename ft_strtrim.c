/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:21:33 by marias-e          #+#    #+#             */
/*   Updated: 2022/09/24 13:15:33 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s || !set)
		return (0);
	start = 0;
	end = ft_strlen(s) - 1;
	while (*s && ft_strchr(set, s[start]))
		start++;
	while (*s && ft_strchr(set, s[end]))
		end--;
	return (ft_substr(s, (unsigned int)start, end - start + 1));
}
