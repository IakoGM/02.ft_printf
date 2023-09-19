/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:55:30 by jakgonza          #+#    #+#             */
/*   Updated: 2022/10/10 10:17:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *s, ...);
int	ft_putnbr(int n);
int	ft_puthexa(size_t n, char c);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr_u(unsigned int n);

#endif
