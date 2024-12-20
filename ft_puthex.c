/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 04:15:27 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/29 05:00:03 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char *hex, int *count)
{
	int	hexi;

	if (n >= 16)
		ft_puthex(n / 16, hex, count);
	hexi = n % 16;
	ft_putchar(hex[hexi], count);
}
