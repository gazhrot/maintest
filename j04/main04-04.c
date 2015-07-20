/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04-04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 17:58:50 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/20 18:01:44 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("%d", ft_fibonacci(-1));
	ft_putchar('\n');
	printf("%d", ft_fibonacci(0));
	ft_putchar('\n');
	printf("%d", ft_fibonacci(10));
	ft_putchar('\n');
	printf("%d", ft_fibonacci(100));
	ft_putchar('\n');
	return (0);
}
