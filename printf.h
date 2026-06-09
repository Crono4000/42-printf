/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:00:11 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/27 17:00:11 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFT_H
# define PRINTFT_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *str, ...);  
void	lower_hexadecimal_digit(unsigned int rest);
void	ft_putchar_fd(char c, int fd);
int		ft_putstr(char *str);
int		long_ft_putnbr(long nb);
int		putnbr_unsigned(unsigned int nb);
int		print_hexadecimal(int nb, void (*f)(unsigned int));
void	upper_hexadecimal_digit(unsigned int rest);

#endif
