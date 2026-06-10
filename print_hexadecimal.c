/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:33:30 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/27 20:33:30 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	upper_hexadecimal_digit(unsigned int rest)
{
	char	ch;

    if (rest < 10)
		ch = '0' + rest;
	else
	{
		if (rest == 10)
			ch = 'A';
		if (rest == 11)
			ch = 'B';
		if (rest == 12)
			ch = 'C';
		if (rest == 13)
			ch = 'D';
		if (rest == 14)
			ch = 'E';
		if (rest == 15)
			ch = 'F';
	}
	write(1, &ch, 1);
}

void	lower_hexadecimal_digit(unsigned int rest)
{
	char	ch;

    if (rest < 10)
		ch = '0' + rest;
	else
	{
		if (rest == 10)
			ch = 'a';
		if (rest == 11)
			ch = 'b';
		if (rest == 12)
			ch = 'c';
		if (rest == 13)
			ch = 'd';
		if (rest == 14)
			ch = 'e';
		if (rest == 15)
			ch = 'f';
	}
	write(1, &ch, 1);
}

int print_hexadecimal(int nb, void (*f)(unsigned int))
{
	int     result;

	result = 1;
	if (nb > 15)
		result += print_hexadecimal(nb / 16, f);
	f(nb % 16);
	return (result);
}
