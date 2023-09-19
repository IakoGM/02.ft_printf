/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakgonza <jakgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:57:55 by jakgonza          #+#    #+#             */
/*   Updated: 2022/10/09 19:35:44 by jakgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n > 9)
		counter += ft_putnbr_u(n / 10);
	counter += ft_putchar(n % 10 + '0');
	return (counter);
}
