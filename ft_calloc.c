/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:45:09 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/11 10:09:17 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_calloc(size_t count, size_t size)
{
    void *p;

    p = malloc(count * sizeof(size));
    if (p)
    {
        ft_bzero(p,count * size);
        return (p);
    }
    return (p);
}

int main()
{
    int *p;

    p = calloc(2,sizeof(int));
    printf("%d",p[100]);
}