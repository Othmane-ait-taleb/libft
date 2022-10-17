/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:06:55 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/16 20:07:01 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *p;
    t_list *n_head;
    void *new_content;

    p = lst;
    n_head = malloc(sizeof(t_list));
    if(!n_head)
        return NULL;
    n_head->content = f(lst->content);
    n_head->next = lst->next;
    
    while (p->next)
    {
        new_content = f(p->content);
        
        
    }
}