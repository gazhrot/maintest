/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05-2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saassame <saassame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 13:49:01 by saassame          #+#    #+#             */
/*   Updated: 2015/07/20 13:53:02 by saassame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char str[] = "";
	char to_find[] = "";

	ft_putstr(ft_strstr(str, to_find));
	ft_putchar('\n');
	return (0);
}
