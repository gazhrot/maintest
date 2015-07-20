/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacques <cjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 12:11:59 by cjacques          #+#    #+#             */
/*   Updated: 2015/07/20 16:29:09 by cjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int		main(void)
{
	int		i;
	int		j;

	i = -12;
	j = 5;
	printf("La valeur absolue de -12 est %d\n", ABS(i));
	printf("La valeur absolue de 5 est %d", ABS(j));
	return (0);
}
