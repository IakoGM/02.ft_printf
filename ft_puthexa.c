/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:01:42 by jakgonza          #+#    #+#             */
/*   Updated: 2022/10/10 10:26:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_puthexa(size_t n, char c)
{
	int	counter;

	counter = 0;
	if (c == 'x' || c == 'p')
	{
		if (n >= 16)
			counter += ft_puthexa(n / 16, c);
		counter += ft_putchar("0123456789abcdef"[n % 16]);
		return (counter);
	}
	else if (c == 'X')
	{
		if (n >= 16)
			counter += ft_puthexa(n / 16, c);
		counter += ft_putchar("0123456789ABCDEF"[n % 16]);
		return (counter);
	}
	return (0);
}
