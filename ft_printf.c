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

#include "ft_printf.h"

void	print_special(char cur, char cur2, va_list args, int *f)
{
	if (cur == 's')
		*(f) += (ft_putstr(va_arg(args, char *)));
	else if (cur == 'd' || cur == 'i')
		*(f) += (long_ft_putnbr((long)va_arg(args, int)));
	else if (cur == 'p')
		*(f) += (ft_printpointer(va_arg(args, void *)));
	else if (cur == 'c')
		*(f) += (ft_putchar_fd(va_arg(args, int), 1), 1);
	else if (cur == 'u')
		*(f) += (putnbr_unsigned(va_arg(args, unsigned int)));
	else if (cur == 'x')
		*(f) += (print_hexadecimal((unsigned long)va_arg(args, unsigned int),
					lower_hexadecimal_digit));
	else if (cur == 'X')
		*(f) += (print_hexadecimal((unsigned long)va_arg(args, unsigned int),
					upper_hexadecimal_digit));
	else if (cur == '%')
		*(f) += (ft_putchar_fd('%', 1), 1);
	else if (cur == '\0' || cur2 == '\0')
		*(f) = (-1);
	else
		*(f) += (ft_putchar_fd('%', 1), 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		result;
	int		i;

	result = 0;
	i = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			print_special(str[i], str[i + 1], args, &result);
			if (result == -1)
				break ;
		}
		else
			result += (int) write(1, str + i, 1);
		i++;
	}
	va_end(args);
	return (result);
}

/*int main(void)
{
	int test = printf("1sss%z ");
	ft_printf("test1:%d\n", test);
	test = ft_printf("2sss%z ");
	ft_printf("test2:%d\n", test);
	return 0;
}*/
