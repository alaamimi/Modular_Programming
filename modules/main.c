/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:18:25 by ablaamim          #+#    #+#             */
/*   Updated: 2022/04/03 17:04:35 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

int	main(void)
{
	t_intarray tab;

	tab = ft_intarray_create(4);
	ft_intarray_debug(tab);
	ENDL;
	ft_intarray_print_positive_values(tab);
	ENDL;
	ft_putnbr(ft_intarray_search(tab, 0));
	ENDL;
	ft_putnbr(ft_intarray_nb_occurences(tab, 0));
	ENDL;
	ft_intarray_destroy(tab);
	return (EXIT_SUCCESS);
}
