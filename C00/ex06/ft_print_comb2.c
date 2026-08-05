/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messaifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 22:20:13 by messaifi          #+#    #+#             */
/*   Updated: 2026/07/16 23:19:04 by messaifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_conv(int nb)
{
	char	l_a;
	char	l_b;

	if (nb < 10)
	{
		ft_putchar('0');
		nb = nb + 48;
		ft_putchar(nb);
	}
	else
	{
		l_a = (nb / 10) + 48;
		l_b = (nb % 10) + 48;
		ft_putchar(l_a);
		ft_putchar(l_b);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_conv(a);
			ft_putchar(' ');
			ft_conv(b);
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
