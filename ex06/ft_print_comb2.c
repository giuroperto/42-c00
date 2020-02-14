/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb23.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:38:47 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/08 18:03:10 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_adjust_dec(int i)
{
	int		dec;
	int		un;

	dec = i / 10;
	un = i % 10;
	ft_putchar(dec + '0');
	ft_putchar(un + '0');
	return (0);
}

int		ft_adjust_un(int i)
{
	ft_putchar('0');
	ft_putchar(i + 48);
	return (0);
}

int		ft_adjust_display(int i)
{
	if (i > 9)
	{
		ft_adjust_dec(i);
	}
	else
	{
		ft_adjust_un(i);
	}
	return (0);
}

void	ft_print_comb2(void)
{
	int		left;
	int		right;

	left = 0;
	while (left <= 99)
	{
		right = left + 1;
		while (right <= 99)
		{
			ft_adjust_display(left);
			ft_putchar(' ');
			ft_adjust_display(right);
			if (left < 98 || right < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			right++;
		}
		left++;
	}
}
