/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray_delete.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:39:41 by ablaamim          #+#    #+#             */
/*   Updated: 2022/02/14 19:52:12 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	ft_intarray_delete(t_intarray *tab, int index)
{
	int	i;

	i = index + 1;
	while (i < tab->len)
	{
		tab->data[i - 1] = tab->data[i];
		i++;
	}
	tab->len--;
}
