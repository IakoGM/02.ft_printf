/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakgonza <jakgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:58:18 by jakgonza          #+#    #+#             */
/*   Updated: 2022/10/09 18:51:59 by jakgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count(int number)
{
	int	result;

	result = 1;
	if (number <= 9)
		return (0);
	while (number > 9)
	{
		number /= 10;
		result++;
	}
	return (result);
}

int	ft_putnbr(int n)
{
	int	counter;

	counter = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"), 11);
	if (n < 0)
	{
		counter += ft_putchar('-');
		n *= -1;
	}
	counter += count(n);
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		counter += ft_putchar(n % 10 + '0');
	return (counter);
}
