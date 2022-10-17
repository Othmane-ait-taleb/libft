/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:35:13 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/17 11:55:16 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int				len;
	unsigned int	i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	while (i < dstsize - 1 && dstsize != 0 && src[i] != '\0')
	{
		printf("%zu", dstsize);
		dst[i] = src[i];
		i++;
	}
	if (i >= 1)
		dst[i] = '\0';
	return (len);
}
