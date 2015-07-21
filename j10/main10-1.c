/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacques <cjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 13:06:18 by cjacques          #+#    #+#             */
/*   Updated: 2015/07/21 13:22:03 by cjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	ft_putchar(nbr + 48);
}

int		main(void)
{
	int		tab[] = {1,2,3,4,5};
	void	(*f)(int);
	
	f = &ft_putnbr;
	ft_foreach(tab, 4, f);
}
