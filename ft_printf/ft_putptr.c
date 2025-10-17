/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanfero <kpanfero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:24:25 by kpanfero          #+#    #+#             */
/*   Updated: 2025/10/17 17:05:39 by kpanfero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <unistd.h>

int	ft_putptr(uintptr_t ptr)
{
	char	*base;
	char	str[20];
	int		i;
	int		count;

	base = "0123456789abcdef";
	i = 0;
	count = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	count += 2;
	while (ptr)
	{
		str[i++] = base[ptr % 16];
		ptr /= 16;
	}
	while (i--)
		count += write(1, &str[i], 1);
	return (count);
}
