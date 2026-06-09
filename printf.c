/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:16:29 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/27 20:16:29 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int    print_special(char cur, va_list args)
{
	if (cur == '%')
		return (int) write(1, &cur, 1);
	if (cur == 's')
		return (ft_putstr(va_arg(args, char*)));
	if (cur == 'd' || cur == 'i')
		return (long_ft_putnbr((long)va_arg(args, int)));
	if (cur == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1), 1);
	if (cur == 'u')
		return (putnbr_unsigned(va_arg(args, unsigned int)));
	if (cur == 'x')
		return (print_hexadecimal(va_arg(args, unsigned int), lower_hexadecimal_digit));
	if (cur == 'X')
		return (print_hexadecimal(va_arg(args, unsigned int), upper_hexadecimal_digit));
	return (0);
}

int ft_printf(const char *str, ...)
{
	va_list	args;
	int		result;
	int		current;

	current = 0;
	va_start(args, str);
	while (str[current] != '\0')
	{
        if (str[current] == '%')
        {
            current++;
			result += print_special(str[current], args);
        }
        else
		{
            write(1, str + current, 1);
			result++;
		}
		current++;
	}
	return (result);
}

