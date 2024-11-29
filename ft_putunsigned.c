/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 04:45:24 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/29 04:55:46 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int n, int *count)
{
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + 48, count);
	}
	else
	{
		ft_putunsigned(n / 10, count);
		ft_putchar((n % 10) + 48, count);
	}
}
