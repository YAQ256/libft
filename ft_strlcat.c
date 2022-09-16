/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:05:23 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/09/16 18:11:37 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	c;
	size_t	d;

	len = ft_strlen(src);
	c = 0;
	while (dst[c] && c < size)
		c++;
	d = 0;
	while (src[c] && c + d + 1 < size)
		dst[c + d] = src[d];
		d++;
	if (d != 0)
		dst[c + d] = '\0';
	return (len + c);
}