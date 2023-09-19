/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakgonza <jakgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:56:27 by jakgonza          #+#    #+#             */
/*   Updated: 2022/10/09 18:13:51 by jakgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	counter;

	counter = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
	{
		counter += ft_putchar(*s);
		s++;
	}
	return (counter);
}
