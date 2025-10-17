/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanfero <kpanfero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:06:34 by kpanfero          #+#    #+#             */
/*   Updated: 2025/10/17 17:02:10 by kpanfero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	manage_format(char rule, va_list args)
{
	if (rule == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (rule == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (rule == 'p')
		return (ft_putptr((uintptr_t)va_arg(args, void *)));
	else if (rule == 'd' || rule == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (rule == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (rule == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	else if (rule == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	else if (rule == '%')
		return (ft_putchar('%'));
	return (0);
}
