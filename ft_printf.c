/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:00:44 by jakgonza          #+#    #+#             */
/*   Updated: 2022/10/10 10:24:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

int	ft_specifier(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putstr("0x") + ft_puthexa(va_arg(args, size_t), c));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr_u(va_arg(args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthexa(va_arg(args, unsigned int), c));
	return (0);
}

int	ft_printf(char const *s, ...)
{
	int		total_len;
	va_list	args;
	int		i;

	total_len = 0;
	va_start(args, s);
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '%')
		{
			total_len += ft_specifier(s[i + 1], args);
			i++;
		}
		else
			total_len += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (total_len);
}
