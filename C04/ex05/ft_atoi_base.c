/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_atoi_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messaifi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 06:18:56 by messaifi          #+#    #+#             */
/*   Updated: 2026/07/28 06:19:30 by messaifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13)
			|| base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_skip_spaces(char **str)
{
	while ((**str >= 9 && **str <= 13) || **str == ' ')
		(*str)++;
}

int	ft_sign(char **str)
{
	int	sign;

	sign = 1;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign = -sign;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	sign;
	int	result;
	int	value;

	base_len = check_base(base);
	if (base_len == 0)
		return (0);
	ft_skip_spaces(&str);
	sign = ft_sign(&str);
	result = 0;
	value = ft_index(*str, base);
	while (value != -1)
	{
		result = result * base_len + value;
		str++;
		value = ft_index(*str, base);
	}
	return (result * sign);
}
