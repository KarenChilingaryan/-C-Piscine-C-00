/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:36:31 by kchiling          #+#    #+#             */
/*   Updated: 2020/12/03 15:41:58 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_print(int x[], int n)
{
	int i;
	int yes;

	i = 0;
	yes = 1;
	while (i < n - 1)
	{
		if (x[i] >= x[i + 1])
			yes = 0;
		i++;
	}
	if (yes == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(x[i]);
			i++;
		}
		if (x[0] != '9' - n + 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print(int x[], int k, int n)
{
	if (k == n - 1)
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			if (n == 9 && x[0] > '1')
				break ;
			ft_check_print(x, n);
			x[k]++;
		}
	}
	else
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			ft_print(x, k + 1, n);
			x[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int x[n];

	ft_print(x, 0, n);
}
