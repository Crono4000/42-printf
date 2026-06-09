/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstuff.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 17:05:37 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/27 21:38:14 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int ft_putstr(char *str)
{
	int	current;

	current = 0;
	while (str[current] != '\0')
	{
		ft_putchar_fd(str[current], 1);
		current++;
	}
    return (current);
}

int long_ft_putnbr(long nb)
{
	char	c;
    int     result;

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

int putnbr_unsigned(unsigned int nb)
{
	char	c;
    int     result;

    result = 1;
	if (nb > 9)
		result += putnbr_unsigned(nb / 10);
	c = 48 + (nb % 10);
	write(1, &c, 1);
    return (result);
}
