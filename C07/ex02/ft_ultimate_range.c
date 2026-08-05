/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messaifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 20:32:53 by messaifi          #+#    #+#             */
/*   Updated: 2026/08/03 21:18:53 by messaifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (!arr)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (size);
}
