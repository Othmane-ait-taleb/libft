/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:32:04 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/11 18:31:49 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int slen;
	int dlen;
	int rtn;
	int i;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	rtn = dlen + slen;
	// if the dstsize is great than rtn (ok) we add tow to the lenth else we return the lengh (test the return)
	if (dstsize < dlen)
		rtn = dstsize + slen;
	if (dstsize >= dlen)
	{
		while (src[i] != '\0' && dlen < dstsize - 1)
		{
			dst[dlen] = src[i];
			i++;
			dlen++;
		}
	}
	dst[dlen] = '\0';
	return (rtn);
}

