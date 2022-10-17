/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:30:54 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/17 11:23:18 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!((*lst)->next))
		(*lst)->next = new;
	else
	{
		p = ft_lstlast(*lst);
		p->next = new;
	}
}
// int main()
// {
//     t_list e1;
//     t_list e2;
//     t_list e3;

//     t_list new;
//     t_list *p;

//     p = &e1;

//     new.content = "oui kkhouya";
//     new.next = NULL;
//     e1.next = &e2;
//     e2.next = &e3;
//     e3.next = NULL;
//     printf("%p", &new);
//     ft_lstadd_back(&p,&new);
//     printf("%p", ft_lstlast(p));
// }