/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 04:15:27 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/24 16:17:35 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long n, char *hex, int *count)
{
	int	hexi;

	if (n >= 16)
		ft_puthex(n / 16, hex, count);
	hexi = n % 16;
	ft_putchar(hex[hexi], count);
}
// int main()
// {
// 	int x = 1235467777;
// 	int *count;
// 	ft_puthex(x, "0123456789ABCDEF", count);
// 	printf("\n%d", *count);
// }


// if(write(1, 0, 0) == 1)
// 		*count = -1;