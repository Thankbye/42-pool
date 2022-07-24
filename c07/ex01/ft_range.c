/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:56:45 by ucani             #+#    #+#             */
/*   Updated: 2022/07/24 13:07:37 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	length;
	int	i;

	i = 0;
	length = max - min ;
	if (length <= 0)
		return (NULL);
	tab = malloc (length * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (i < length)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
