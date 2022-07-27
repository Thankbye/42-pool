/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:22:27 by ucani             #+#    #+#             */
/*   Updated: 2022/07/24 20:19:02 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include	"ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int	i;
	
	i = 0;
	str = malloc(ft_strlen(src) + 1);
	if (src == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str *my_stock_str;

	if (ac < 1)
		ac = 0;
	my_stock_str = malloc((ac + 1) * sizeof(t_stock_str));
	if (my_stock_str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		my_stock_str[i].size = ft_strlen(av[i]);
		my_stock_str[i].str = av[i];
		my_stock_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	my_stock_str[i].str = 0;
	return (my_stock_str);
}
