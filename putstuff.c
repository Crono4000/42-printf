/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstuff.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 17:05:37 by afranco-          #+#    #+#             */
/*   Updated: 2026/06/16 16:38:42 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	current;

	if (!str)
		str = "(null)";
	current = 0;
	while (str[current] != '\0')
	{
		write(1, str + current, 1);
		current++;
	}
	return (current);
}

int	long_ft_putnbr(long nb)
{
	char	c;
	int		result;

	result = 1;
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
		result++;
	}
	if (nb > 9)
		result += long_ft_putnbr(nb / 10);
	c = 48 + (nb % 10);
	write(1, &c, 1);
	return (result);
}

int	putnbr_unsigned(unsigned int nb)
{
	char	c;
	int		result;

	result = 1;
	if (nb > 9)
		result += putnbr_unsigned(nb / 10);
	c = 48 + (nb % 10);
	write(1, &c, 1);
	return (result);
}
