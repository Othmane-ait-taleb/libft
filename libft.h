/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:28:17 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/09 18:12:31 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
// dont forg to remove printf and this
# include <stdio.h>
# include <string.h>
//delet
void *ft_memcpy(void *restrict dst, const void *restrict src, int n);
int	ft_strlen(const char *s);

# endif