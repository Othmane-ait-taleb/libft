/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:11:30 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/17 11:51:35 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rtr;

	rtr = malloc(sizeof(t_list));
	if (!rtr)
		return (NULL);
	rtr->content = content;
	rtr->next = NULL;
	return (rtr);
}
