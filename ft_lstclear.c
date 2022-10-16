/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:44:18 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/16 16:31:17 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while ((*lst)->next)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	del((*lst)->content);
	free(*lst);
	lst = NULL;
}

// void	d(void *p)
// {
// 	free(p);
// }
// int	main(void)
// {
// 	t_list *e1;
// 	t_list *e2;
// 	t_list *e3;
// 	t_list *e4;

// 	t_list **t;

// 	t = &e3;
// 	e1 = malloc(sizeof(t_list));
// 	e1->content = (char *)malloc(sizeof(char));

// 	e2 = malloc(sizeof(t_list));
// 	e2->content = (char *)malloc(sizeof(char));

// 	e3 = malloc(sizeof(t_list));
// 	e3->content = (char *)malloc(sizeof(char));

// 	e4 = malloc(sizeof(t_list));
// 	e4->content = (char *)malloc(sizeof(char));

// 	e1->next = e2;
// 	e2->next = e3;
// 	e3->next = e4;
// 	e4->next = NULL;

// 	printf("%p", ft_lstlast(e1));
// 	printf("%p \n", e4);

// 	ft_lstclear(t, &d);
// 	printf("%p", ft_lstlast(e1));
// }