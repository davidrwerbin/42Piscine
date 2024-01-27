/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:40:49 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/12 14:06:30 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	int	u;
	int	d;

	u = '0' + (n % 10);
	d = '0' + (n / 10);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putnbr(a);
			write(1, " ", 1);
			ft_putnbr(b);
			if ((a != 98) || (b != 99))
				write(1, ", ", 2);
			b ++;
		}
		a++;
	}
}
/*
int	main()
{
	ft_print_comb2();
	write(1, "\n", 1);
	return(0);
}
*/