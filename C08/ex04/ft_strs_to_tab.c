/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messaifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 03:35:33 by messaifi          #+#    #+#             */
/*   Updated: 2026/08/05 03:35:51 by messaifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_free_tab(t_stock_str *result, int size)
{
	while (size > 0)
	{
		size--;
		free(result[size].copy);
	}
	free(result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;
	int			len;

	result = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		result[i].size = len;
		result[i].str = av[i];
		result[i].copy = malloc(sizeof(char) * (len + 1));
		if (!result[i].copy)
		{
			ft_free_tab(result, i);
			return (NULL);
		}
		ft_strcpy(result[i].copy, av[i]);
		i++;
	}
	result[i].str = NULL;
	return (result);
}
