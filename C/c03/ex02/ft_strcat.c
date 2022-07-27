/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:47:32 by ucani             #+#    #+#             */
/*   Updated: 2022/07/12 12:11:27 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
			i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
			j++;
	}				
	dest[i + j] = '\0';
	return (dest);
}
