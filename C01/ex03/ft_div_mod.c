/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:58:44 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/06 12:59:46 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int prueba = 4;
	int prueba2 = 2;
	int punterodiv;
	int punteromod;
	ft_div_mod(prueba, prueba2, &punterodiv, &punteromod);
	printf("%d %d", punterodiv, punteromod);
}
*/
