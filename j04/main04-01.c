/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04-01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 17:31:00 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/20 17:32:53 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%d", ft_recursive_factorial(-1));
	printf("%d", ft_recursive_factorial(0));
	printf("%d", ft_recursive_factorial(5));i
	return (0);
}

