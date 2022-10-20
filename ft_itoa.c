/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:14:20 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/20 14:39:24 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_of_d(int nbr)
{
	int				rst;
	int				count;
	unsigned int	n;

	n = nbr;
	count = 0;
	rst = 1;
	if (nbr < 0)
	{
		n *= -1;
		count++;
	}
	while (rst > 0)
	{
		rst = n / 10;
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_nega(int n, char **rtr, int *limit, unsigned int *pnbr)
{
	if (n < 0)
	{
		*(rtr[0]) = '-';
		*pnbr = n * -1;
		*limit = 1;
	}
}

char	*ft_itoa(int n)
{
	int				size;
	int				i;
	int				limit;
	char			*rtr;
	unsigned int	pnbr;

	pnbr = n;
	i = 0;
	limit = 0;
	size = ft_n_of_d(n);
	rtr = (char *)malloc((size + 1) * sizeof(char));
	if (!rtr)
		return (NULL);
	ft_nega(n, &rtr, &limit, &pnbr);
	rtr[size--] = '\0';
	while (size >= limit)
	{
		rtr[size--] = 48 + (pnbr % 10);
		pnbr = pnbr / 10;
	}
	return (rtr);
}


static int	word_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	return (count + 1);
}

static char	*word_by_word(char *s, char c, size_t *start)
{
	int		i;
	int		end;
	char	*rtr;

	i = *start;
	while (s[i] && s[i] == c)
		i++;
	*start = i;
	while (s[i] && s[i] != c)
		i++;
	end = i;
	rtr = ft_substr(s, *start, end - *start);
	if (rtr == NULL)
		free(rtr);
	*start = end;
	return (rtr);
}

static int	protection(char const *s, char **trim, char ***rtr, char c)
{
	if (!s)
		return (0);
	*trim = ft_strtrim(s, &c);
	if (!(*trim))
		return (0);
	*rtr = (char **)malloc((word_count(*trim, c) + 1) * sizeof(char *));
	if (!(*rtr))
	{
		free(*trim);
		return (0);
	}
	return (1);
}

static void	ft_free_all(char **rtn)
{
	size_t	i;

	i = 0;
	while (rtn[i])
	{
		free(rtn[i]);
		i++;
	}
	free(rtn);
	rtn = 0;
}

char	**ft_split(char const *s, char c)
{
	char	*trim;
	char	**rtr;
	int		i;
	size_t	start;

	i = 0;
	start = 0;
	if (!(protection(s, &trim, &rtr, c)))
		return (NULL);
	while (start < ft_strlen(trim))
	{
		*(rtr + i) = word_by_word(trim, c, &start);
		if (*(rtr + i) == NULL)
		{
			ft_free_all(rtr);
			return (NULL);
		}
		i++;
	}
	*(rtr + i) = 0;
	free(trim);
	return (rtr);
}