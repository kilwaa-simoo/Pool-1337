/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messaifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 00:18:07 by messaifi          #+#    #+#             */
/*   Updated: 2026/07/30 00:39:29 by messaifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	while (nb >= 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
