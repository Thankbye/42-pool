/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:42:21 by ucani             #+#    #+#             */
/*   Updated: 2022/07/24 20:35:30 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//strlen pour renvoyer la longueur de la chaine de char
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
//voir si cest dans le sparateur ou pas
int	is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}
//cpy pour copier une chaine de char
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src [i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// combien il y aura de tab dans le tab pour allouer memoire
int	count_memory(char *str, char *charset)
{
	int	count;
	int	i;
	int	k;

	count = 0;
	i = 0;
	while (i < ft_strlen(str))
	{
		while (i < ft_strlen(str) && is_in_charset(str[i], charset))
			i++;
		k = i;
		while (i < ft_strlen(str) && !is_in_charset(str[i], charset))
			i++;
		if (i > k)
			count += 1;
	}
	return (count);
}
// on assemble le tout 
char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	char	temp[1500];
	int		tab_index;

	tab = malloc(sizeof(char *) * (count_memory(str, charset) + 1));
	i = 0 ;
	tab_index = 0;
	while (i < ft_strlen(str))
	{
		while (i < ft_strlen(str) && is_in_charset(str[i], charset))
			i++;
		j = 0;
		while (i < ft_strlen(str) && !is_in_charset(str[i], charset))
			temp[j++] = str[i++];
		if (j > 0)
		{
			temp[j] = '\0';
			tab[tab_index] = malloc(sizeof(char) * (ft_strlen(temp) + 1));
			ft_strcpy(tab[tab_index++], temp);
		}
	}
	tab[tab_index] = 0;
	return (tab);
}
