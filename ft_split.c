/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:32:17 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/12 20:52:08 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_locate(char const *s, char c, int *start, int *end)
{
    int i;

    i = *start;
    while (s[i] && s[i] != c)
        i++;
    if (i < ft_strlen(s))
     *start = i;
    while (s[i] && s[i] == c)
        i++;
    while (s[i] && s[i] != c)
        i++;
    while (s[i] && s[i] == c)
    {
        i++;
    *end = i ;
    }
}

char ft_split(char const *s, char c)
{
    int start;
    int end;
    
    end = 0;
    start = 0;
    while (end < ft_strlen(s))
    {
        
    ft_locate(s,c,&start, &end);
    printf("%d %d ",start,end);
    start = end + 1;
    
    }
}
int main(int argc, char const *argv[])
{
    
}
