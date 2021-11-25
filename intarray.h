/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:42:03 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/25 14:02:11 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTARRAY_H
#define INTARRAY_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_intarray
{
	int	*data;
	int	len;
} t_intarray;

void	ft_intarray_debug(int *tab, int size);
void	ft_print_numbers(int n);
void	ft_putchar(char c);
#endif
