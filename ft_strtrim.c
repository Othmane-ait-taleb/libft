/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:26:34 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/13 18:12:49 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_start(char const *s1, char const *set)
{
    char *__rtr;
    int i;
    int s;
    
    i = 0;
    s = 0;
    __rtr = (char *)s1;
    while (__rtr[s])
    {
        while (set[i])
        {
            if(__rtr[s] == set[i])
            {
                s++;
                i = 0;
            }
            else 
                i++;
        }
        if ( i == ft_strlen(set))
            break;       
    }
    return s;
}

static  int ft_end(char const *s1, char const *set)
{
    char *__rtr;
    int i;
    int e;
    
    i = 0;
    e = ft_strlen(s1) - 1;
    __rtr = (char *)s1;
    while (e > 0)
    {
        while (set[i])
        {
            if(__rtr[e] == set[i])
            {
                e--;
                i = 0;
            }
            else 
                i++;
        }
        if ( i == ft_strlen(set))
            break;
    }
    return e;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int s;
    int e;
    char *__rtr;
    int len;
    
e = ft_end(s1,set);
s = ft_start(s1,set);

len = e-s+1;
__rtr = ft_substr(s1,s,len);

    return __rtr;
}
// int main(int argc, char const *argv[])
// {
//     printf("%s",ft_strtrim("   u   "," "));
//     return 0;
// }