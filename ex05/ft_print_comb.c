/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:27:10 by kchiling          #+#    #+#             */
/*   Updated: 2020/11/29 17:06:56 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
    write( 1, &c, 1);
}

void	ft_print_comb(void)
{
    int     a;
    int     b;
    int     c;

    a = 0;

    while (a < 8)
    {
            b = a + 1;
            while (b < 9)
            {
                    c = b + 1;
                    while (c <= 9)
                    {
                            ft_print('0' + a%10);
                            ft_print('0' + b%10);
                            ft_print('0' + c%10);
                   
							if (a < 7 || b < 8 || c < 9)
                            {
                                    ft_print(',');
                                    ft_print(' ');
                            }
							c++;
                    }
                    b++;
            }
            a++;
    }
}
