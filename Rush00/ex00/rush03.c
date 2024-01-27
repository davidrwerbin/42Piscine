/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:39:07 by femoreno          #+#    #+#             */
/*   Updated: 2023/10/31 22:08:09 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char z);

void	ft_extremos(int x)
{
	int	ix;

	ix = 1;
	while (ix <= x)
	{
		if (ix == 1)
		{
			ft_putchar('A');
		}
		else if (ix == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		ix++;
	}
	ft_putchar('\n');
}

void	ft_cuerpo(int x)
{
	int	ix;

	ix = 1;
	while (ix <= x)
	{
		if (ix == 1 || ix == x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		ix++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	iy;

	iy = 1;
	if (x > 0 && y > 0)
	{
		while (iy <= y)
		{
			if (iy == 1 || iy == y)
			{
				ft_extremos(x);
			}
			else
			{
				ft_cuerpo(x);
			}
			iy++;
		}
	}
	else
	{
		write(1, "Los Parametros deben ser mayores que 0", 38);
	}
}
