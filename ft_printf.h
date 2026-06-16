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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	lower_hexadecimal_digit(unsigned long rest);
int		ft_putstr(char *str);
int		long_ft_putnbr(long nb);
int		putnbr_unsigned(unsigned int nb);
void	upper_hexadecimal_digit(unsigned long rest);
int		ft_printpointer(void *p);
int		ft_putchar_fd(char c, int fd);
int		print_hexadecimal(unsigned long nb, void (*f)(unsigned long));

#endif
