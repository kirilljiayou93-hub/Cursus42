/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanfero <kpanfero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:29:16 by kpanfero          #+#    #+#             */
/*   Updated: 2025/10/17 17:25:59 by kpanfero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		x;

	str = "Hello";
	x = 42;
	ft_printf("1. %%c: [%c]\n", 'A');
	printf(" . %%c: [%c]\n", 'A');
	ft_printf("2. %%s: [%s]\n", str);
	printf(" . %%s: [%s]\n", str);
	ft_printf("3. %%s NULL: [%s]\n", (char *)NULL);
	printf(" . %%s NULL: [%s]\n", (char *)NULL);
	ft_printf("4. %%p: [%p]\n", &x);
	printf(" . %%p: [%p]\n", (void *)&x);
	ft_printf("5. %%p NULL: [%p]\n", (void *)0);
	printf(" . %%p NULL: [%p]\n", (void *)0);
	ft_printf("6. %%d: [%d]\n", 1234);
	printf(" . %%d: [%d]\n", 1234);
	ft_printf("7. %%i: [%i]\n", -5678);
	printf(" . %%i: [%i]\n", -5678);
	ft_printf("8. INT_MAX: [%d]\n", INT_MAX);
	printf(" . INT_MAX: [%d]\n", INT_MAX);
	ft_printf("9. INT_MIN: [%d]\n", INT_MIN);
	printf(" . INT_MIN: [%d]\n", INT_MIN);
	ft_printf("10. %%u: [%u]\n", 3000000000u);
	printf("  . %%u: [%u]\n", 3000000000u);
	ft_printf("11. %%x: [%x]\n", 305441741);
	printf("  . %%x: [%x]\n", 305441741);
	ft_printf("12. %%X: [%X]\n", 305441741);
	printf("  . %%X: [%X]\n", 305441741);
	ft_printf("13. %%%%: [%%]\n");
	printf("  . %%%%: [%%]\n");
	return (0);
}
