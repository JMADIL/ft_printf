/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 01:06:04 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/20 06:48:00 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

int		ft_printf(const char *, ...);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putchar(char c, int *count);
int		ft_putptr(void *ptr, int *count);
int		ft_puthex(unsigned long n, char *hex, int *count);
#endif