/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04-03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 17:43:56 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/20 17:48:49 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%d", ft_recursive_power(-1, 5));
	ft_putchar('\n');
	printf("%d", ft_recursive_power(0, 5));
	ft_putchar('\n');
	printf("%d", ft_recursive_power(5, 5));
	ft_putchar('\n');
	printf("%d", ft_recursive_power(10, 15));
	ft_putchar('\n');
	printf("%d", ft_recursive_power(-1, -1));
	ft_putchar('\n');
	printf("%d", ft_recursive_power(5, -1));
	ft_putchar('\n');
	printf("%d", ft_recursive_power(5, 0));
	ft_putchar('\n');
	printf("%d", ft_recursive_power(-5, -5));
	ft_putchar('\n');
	return (0);
}

