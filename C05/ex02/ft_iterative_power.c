/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messaifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 01:09:13 by messaifi          #+#    #+#             */
/*   Updated: 2026/07/30 01:24:31 by messaifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
