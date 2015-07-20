/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04-02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 17:41:20 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/20 17:43:06 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d", ft_iterative_power(-1));
	printf("%d", ft_iterative_power(0));
	printf("%d", ft_iterative_power(5));
	return (0);
}
