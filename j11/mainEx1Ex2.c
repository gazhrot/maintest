/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjacques <cjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 12:16:44 by cjacques          #+#    #+#             */
/*   Updated: 2015/07/22 14:32:58 by cjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list	*list;

	list = NULL;
	ft_list_push_back(&list, "toto\n");
	ft_list_push_back(&list, "titi\n");
	ft_list_push_back(&list, "tbtb\n");
	ft_list_push_back(&list, "tata\n");
	ft_list_push_back(&list, "tctc\n");
	print_list(list);
	return (0);
}
