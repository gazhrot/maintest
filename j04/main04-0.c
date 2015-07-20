/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04-0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 17:23:58 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/20 17:30:13 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int main(void)
{
	printf("%d", ft_iterative_factorial(-1));
	printf("%d", ft_iterative_factorial(0));
	printf("%d", ft_iterative_factorial(5));
	return (0);
}
