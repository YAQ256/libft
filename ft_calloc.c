/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:22:18 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/09/19 18:36:32 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	ptr = malloc (size * count);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}
/*
#include <stdlib.h>
#include <unistd.h>

int		main(int argc, const char *argv[])
{
	char	*str;

	alarm(5);
	if (argc == 1)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		str = (char *)ft_calloc(30, 1);
		if (!str)
			write(1, "NULL", 4);
		else
			write(1, str, 30);
	}
	return (0);
}
*/