/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04-02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 17:41:20 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/20 18:05:13 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d", ft_iterative_power(-1));
	ft_putchar('\n');
	printf("%d", ft_iterative_power(0));
	ft_putchar('\n');
	printf("%d", ft_iterative_power(5));
	ft_putchar('\n');
	return (0);
}
