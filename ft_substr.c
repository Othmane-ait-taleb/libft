/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:58:00 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/17 11:56:36 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*__substr;
	int		i;
	int		size;

	i = 0;
	size = len + 1;
	__substr = malloc((size) * sizeof(char));
	if (!__substr)
		return (NULL);
	while (i < len)
	{
		__substr[i++] = s[start++];
	}
	__substr[i] = '\0';
	return (__substr);
}
