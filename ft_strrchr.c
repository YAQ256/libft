/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:27:01 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/09/19 12:27:04 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *) &s[len]);
	while (len + 1 > 0)
	{
		if (s[len] == (char) c)
			return ((char *) &s[len]);
		len--;
	}
	return (0);
}