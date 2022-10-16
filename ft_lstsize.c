/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:57:46 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/15 21:25:00 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;
    t_list *p;

    p = lst;
    count = 1;
    while (p->next)
    {
        count++;
        p = p->next;
    }
    return count;
}

int main()
{
    t_list e1;
    t_list e2;
    t_list e3;
    
    e1.next = &e2;
    e2.next = &e3;
    e3.next = NULL;

    printf("%d",ft_lstsize(&e1));
    
    
    
}