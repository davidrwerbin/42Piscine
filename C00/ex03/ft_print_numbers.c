/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:42:15 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/02 14:16:45 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;

	i = 48;
	while (i <= 57)
	{
		write(1, &i, 1);
		i ++;
	}
}
/*
void	print_numberschar(void)
{
	write(1, "\n", 1);
	char	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c ++;
	}
}
*/
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
