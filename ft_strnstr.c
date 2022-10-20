/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:58:13 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/20 14:46:49 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*__rtr;

	j = 0;
	i = 0;
	__rtr = NULL;
	if (!haystack && len == 0 )
		return (NULL);
	while (haystack[i] && i <= len)
	{
		if (__rtr)
			return (__rtr);
		if (haystack[i] == needle[j])
		{
			while (needle[j] && haystack[i + j] && haystack[i + j] == needle[j]
				&& (i + j) < len)
				j++;
		}
		if (j == ft_strlen(needle) && j <= len)
			__rtr = (char *)(haystack + i);
		j = 0;
		i++;
	}
	return (__rtr);
}

// int	main(void)
// {
// 	char *s1 = "oh no not the empty string !";
// 	char *s2 = "the";
// 	size_t max = 16;
// 	//char *i1 = strnstr(s1, s2, max);
// 	char *i2 = ft_strnstr(s1, s2, 13);
// 	//printf("%s \n",i1);
// 	printf("%s \n", i2);
// }