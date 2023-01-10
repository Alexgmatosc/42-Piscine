/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:12:47 by alematos          #+#    #+#             */
/*   Updated: 2023/01/10 22:53:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	if (nb > 1)
		resultado = nb * ft_recursive_factorial(nb - 1);
	return (resultado);
}
/*
int	main(void)
{	
	printf("este  es el resultado %i", ft_recursive_factorial(5));
	return (0);
}
*/
