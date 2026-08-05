/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messaifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 00:18:32 by messaifi          #+#    #+#             */
/*   Updated: 2026/08/04 00:51:39 by messaifi         ###   ########.fr       */
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

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
		total += ft_strlen(strs[i++]);
	total += (size - 1) * ft_strlen(sep);
	return (total + 1);
}

void	ft_copy(char *dest, char *src, int *index)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*index] = src[i];
		(*index)++;
		i++;
	}
}

void	ft_fill(char *res, int size, char **strs, char *sep)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (i < size)
	{
		ft_copy(res, strs[i], &index);
		if (i < size - 1)
			ft_copy(res, sep, &index);
		i++;
	}
	res[index] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;

	if (size == 0)
	{
		res = malloc(sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	res = malloc(ft_total_len(size, strs, sep));
	if (!res)
		return (NULL);
	ft_fill(res, size, strs, sep);
	return (res);
}
