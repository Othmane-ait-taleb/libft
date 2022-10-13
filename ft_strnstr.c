/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:58:13 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/13 18:04:52 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		flag;
	char	*__rtr;

	flag = 0;
	j = 0;
	i = 0;
	__rtr = NULL;
	while (haystack[i] && i < len)
	{
		// to check if we find the furst one ("ouikoui","oui",7)
		if (__rtr)
			return (__rtr);
		if (haystack[i] == needle[j])
		{
			while (needle[j] && haystack[i + j] && haystack[i + j] == needle[j])
				j++;
		}
		
        if ( j == ft_strlen(needle) && j <= len)
            __rtr = (char *)(haystack + i );
        j = 0;
        i++;
	}

    return __rtr;
}
