/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:56:52 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/09 22:44:29 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    int i;
    char *s2;

    s2 = (char *)s;
    i = 0;
    c = (char)c;
    if (c == '\0')
    {
      while (s2[i])
        i++;
        return (s2 + i); 
    }
    
    else 
    while (*s2 != c)
    s2++;
    return (s2);
}
int main()
{
    printf("%s",ft_strchr("ouoi",'u'));
}
