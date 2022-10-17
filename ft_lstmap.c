/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:06:55 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/17 15:25:42 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nd;
	t_list	*n_list;

	if (!lst)
		return (NULL);
	n_list = ft_lstnew(0);
	while (lst)
	{
		nd = ft_lstnew(f(lst->content));
		if (!nd)
		{
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		ft_lstadd_back(&n_list, nd);
		lst = lst->next;
	}
	return (n_list);
}

// void	d(void *p)
// {
// 	free(p);
// }
// char	*ft_ttoupper(char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 	{
// 		return ("oui khdama khouya");
// 	}
// 	return ("oui khdama khouya");
// }

// int	main(void)
// {
// 	t_list *e1;
// 	t_list *e2;
// 	t_list *e3;
// 	t_list *e4;
// 	t_list *new;
// 	e1 = malloc(sizeof(t_list));
// 	e1->content = ft_strdup(" teh text nm1 ");
// 	e2 = malloc(sizeof(t_list));
// 	e2->content = ft_strdup(" teh text nm2 ");
// 	e3 = malloc(sizeof(t_list));
// 	e3->content = ft_strdup("teh text nm2");
// 	e4 = malloc(sizeof(t_list));
// 	e4->content = ft_strdup("teh text nm3");
// 	e1->next = e2;
// 	e2->next = e3;
// 	e3->next = e4;
// 	e4->next = NULL;
//     int i = 0;
// 	new = ft_lstmap(e1, &ft_ttoupper, &d);
//     while (new->next)
//     {
//         printf("%s %d",(new)->content,i++ );
//         new = new->next;
//     }
// }