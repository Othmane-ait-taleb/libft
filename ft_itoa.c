/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:14:20 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/17 11:46:52 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_of_d(int n)
{
	int	rst;
	int	count;

	count = 0;
	rst = 1;
	while (rst > 0)
	{
		rst = n / 10;
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		size;
	int		i;
	char	*rtr;

	i = 0;
	size = ft_n_of_d(n);
	rtr = (char *)malloc((size + 1) * sizeof(char));
	if (!rtr)
		return (NULL);
	rtr[size] = '\0';
	size--;
	while (size >= 0)
	{
		rtr[size] = 48 + (n % 10);
		size--;
		n = n / 10;
	}
	return (rtr);
}
