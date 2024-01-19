/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noben-ai <noben-ai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:02:14 by noben-ai          #+#    #+#             */
/*   Updated: 2024/01/18 18:29:45 by noben-ai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int put_int(int n, char *base);
int put_str(char *str);
int ft_putchar(char c);
int ft_printf(const char *s, ...);
int put_p(unsigned long number, char *base);
int put_x(unsigned int number, char *base);
int ft_strlen(char *str);
#endif