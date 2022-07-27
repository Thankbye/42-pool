/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:19:41 by ucani             #+#    #+#             */
/*   Updated: 2022/07/24 20:26:23 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_.h"

int	ft_strlen(char *str)
{
	int i;

	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1)
		str++;
	}
}

void	ft_rev_int_tab(char *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i < (size / 2))
	{
		
