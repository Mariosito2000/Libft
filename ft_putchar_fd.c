/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:44:07 by marias-e          #+#    #+#             */
/*   Updated: 2022/09/20 13:24:37 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
/*
int	main(void)
{
	int	fd;

	fd = open("text.txt", O_CREAT | O_WRONLY, 0600);
	ft_putchar_fd('A', fd);
}*/
