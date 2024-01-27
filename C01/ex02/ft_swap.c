/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:19:16 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/07 12:18:13 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int a = 4;
	int b = 6;
	printf("antes %d %d", a, b);
	ft_swap(&a, &b);
	printf("despues %d %d", a, b);
}
*/
