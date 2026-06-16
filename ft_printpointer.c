/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:35:19 by afranco-          #+#    #+#             */
/*   Updated: 2026/06/16 16:33:53 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(void *p)
{
	if (!p)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + print_hexadecimal((unsigned long) p,
			lower_hexadecimal_digit));
}
