/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 06:40:42 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/20 06:53:15 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putstr("0x", count);
	ft_puthex((unsigned long)ptr, hex, count);
}
