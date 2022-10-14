/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:28:17 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/14 04:42:27 by otait-ta         ###   ########.fr       */
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
void *ft_memcpy(void *dst, const void *src, int n);
int	ft_strlen(const char *s);
int	ft_isdigit(int n);
void	ft_bzero(void *b, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s1, char const *set);
char *ft_strchr(const char *s, int c);
void	ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
# endif