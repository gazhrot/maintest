/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08-3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacques <cjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 12:38:01 by cjacques          #+#    #+#             */
/*   Updated: 2015/07/20 16:31:42 by cjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(void)
{
	t_point point;

	set_point(&point);
	return (0);
}
