/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:49:30 by ucani             #+#    #+#             */
/*   Updated: 2022/07/24 13:08:18 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen2(char **strs, int size)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		result += ft_strlen(strs[i++]);
	}
	return (result);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len;
	int		i;

	if (size <= 0 || !sep || !strs)
	{
		result = malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	len = ft_strlen(sep) * (size - 1) + ft_strlen2(strs, size) + 1;
	result = malloc(sizeof(char) * len);
	if (!result)
		return (0);
	result[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i++]);
		if (i < size)
			ft_strcat(result, sep);
	}
	result[len - 1] = '\0';
	return (result);
}
