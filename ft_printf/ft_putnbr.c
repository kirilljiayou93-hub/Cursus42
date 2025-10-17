/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanfero <kpanfero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:24:52 by kpanfero          #+#    #+#             */
/*   Updated: 2025/10/17 16:28:31 by kpanfero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr(int n)
{
	long	num;
	int		count;
	char	c;
	char	minus;

	minus = '-';
	num = n;
	count = 0;
	if (num < 0)
	{
		count += write(1, &minus, 1);
		num = -num;
	}
	if (num >= 10)
		count += ft_putnbr(num / 10);
	c = num % 10 + '0';
	count += write(1, &c, 1);
	return (count);
}
