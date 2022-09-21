/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:57:13 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/09/21 16:58:50 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = malloc(ft_strlen(s) + 1);
	if (tmp == 0)
		return (0);
	if (s == 0 || f == 0)
		return (0);
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
