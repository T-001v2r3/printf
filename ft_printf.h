/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperfeit <gperfeit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:59:20 by gperfeit          #+#    #+#             */
/*   Updated: 2022/12/01 21:52:22 by gperfeit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_put_char(char c);
int		ft_printptr(unsigned long long p);
void	ft_put_nbr(unsigned int value, int *l, int unsig);
void	ft_put_hex(unsigned int value, int *l, int upper);
int		ft_printf(const char *str, ...);
int		ft_format(va_list args, char c);
int		ft_put_str(char *s);
#endif
