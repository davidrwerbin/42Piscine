/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:40:38 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/09 13:59:57 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	valor;

	count = 0;
	while (count < (size / 2))
	{
		valor = (size - 1) - count;
		ft_swap(&tab[count], &tab[valor]);
		count++;
	}
}
/*
int	main(void)
{
	int n[] = {1, 2, 4};
	int	i = 0;
	while (i < 3)
	{
		printf("El array inicial es: %d\n", n[i]);
		i++;
	}
	ft_rev_int_tab(n, 3);
	i = 0;
	while (i < 3)
	{
		printf("El array inicial es: %d\n", n[i]);
		i++;
	}
	return (0);
}
*/
