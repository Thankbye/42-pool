/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:32:42 by ucani             #+#    #+#             */
/*   Updated: 2022/07/12 11:24:54 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	i;

	i = 0;
	if (!dest || !src)
		return (0);
	if (size > 0)
	{
		while (size-- && *src)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src)
		i++;
	return (i);
}
