/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:16:56 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/09 12:36:31 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
//	ft_putstr("holahsdon");
//	ft_prueba("hola");
	char strr[]= "hdos";
	ft_prueba(strr);
	ft_putstr(strr);
	return (0);
}
*/
