/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04-01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 17:31:00 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/20 18:04:53 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%d", ft_recursive_factorial(-1));
	ft_putchar('\n');
	printf("%d", ft_recursive_factorial(0));
	ft_putchar('\n');
	printf("%d", ft_recursive_factorial(5));i
	ft_putchar('\n');
	return (0);
}

