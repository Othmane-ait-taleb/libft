/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:43:03 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/09 18:41:27 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (i < len)
		*((unsigned char *)b + i++) = (unsigned char )c;
	return (b);
	
}
