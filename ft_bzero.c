/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:31:59 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/17 18:07:29 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	size_t	i;

	if (!b)
		return ;
	i = 0;
	while (i < n)
	{
		*((unsigned char *)b + i) = 0;
		i++;
	}
}
