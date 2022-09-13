/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <cyacoub-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:01:23 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/09/13 16:29:13 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stddef.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *str1, char *str2);
size_t	ft_strlen(char *str);
int		ft_strncmp(char *str1, char *str2, unsigned int n);

#endif
