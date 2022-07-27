/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:57:10 by ucani             #+#    #+#             */
/*   Updated: 2022/07/14 13:45:57 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0' && i < size)
	{
			i++;
	}
	j = i;
	while (src[i - j] != '\0' && i < size - 1)
	{
		dest[i] = src[i - j];
			i++;
	}
	if (j < size)
		dest[i] = '\0';
	return (j + ft_strlen(src));
}
