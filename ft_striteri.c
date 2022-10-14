/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:51:06 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/14 03:05:17 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_ttolower(unsigned int i, char *c)
{
    (void)i;
	if (*c >= 'A' && *c <= 'Z')
	{
		*c = *c + 32;
	}

}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int len;
	if (!s || !f)
		return ;
	len = ft_strlen(s) + 1;
	while (--len >= 0)
		f(len, s + len);
}

int main(int argc, char const *argv[])
{
    char t[] = "";
    ft_striteri(t,&ft_ttolower);
    
    printf("%s",t);
    return 0;
}
