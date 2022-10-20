/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:19:45 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/19 12:57:11 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	if (!lst)
		return (NULL);
	p = lst;
	while (p->next)
		p = p->next;
	return (p);
}

// int main()
// {
//     t_list e1 ;
//     t_list e2;
//     t_list e3;

//     e1.next = &e2;
//     e2.next = &e3;
//     e3.next = NULL;

//     printf("%p", e2.next);
//     printf("%p", ft_lstlast(&e1));
// }