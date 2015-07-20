/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07-00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 12:37:08 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/20 12:43:12 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src);

int		main(void)
{
	char	*str;

	str = "toto est partie en vacances et moi aussi !";
	ft_strdup(str);
	ft_putstr(str);
	ft_strlen(str);
	ft_putchar('\n');
}
