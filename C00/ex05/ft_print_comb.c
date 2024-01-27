/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:53:43 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/12 14:03:20 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	{
		while (a <= '7')
		{
			b = a + 1;
			while (b <= '8')
			{
				c = b + 1;
				while (c <= '9')
				{
					ft_print_numbers(a, b, c);
					c ++;
				}
				b ++;
			}
			a ++;
		}
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/