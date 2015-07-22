/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05-1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saassame <saassame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 12:52:25 by saassame          #+#    #+#             */
/*   Updated: 2015/07/20 12:55:52 by saassame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char src[] = "shbauhfah";
	char dest[] = "fffffffffffff";

	ft_putstr(ft_strncpy(dest, src, 4));
	ft_putchar('\n');
	return (0);
}
