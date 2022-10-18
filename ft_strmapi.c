/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:35:59 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/18 15:27:44 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*rtr;
	unsigned int	i;
	int				len;

	len = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	rtr = malloc((len + 1) * sizeof(char));
	if (!rtr || !f)
		return (NULL);
	while (i < (unsigned int)len)
	{
		rtr[i] = f(i, s[i]);
		i++;
	}
	rtr[i] = '\0';
	return (rtr);
}
