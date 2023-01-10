/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:01:49 by alematos          #+#    #+#             */
/*   Updated: 2023/01/10 22:58:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_columns(int num)
{
	int	f_num;
	int	s_num;

	f_num = '0' + (num / 10);
	s_num = '0' + (num % 10);
	write(1, &f_num, 1);
	write(1, &s_num, 1);
}

void	ft_print_comb2(void)
{
	int	colum1;
	int	colum2;

	colum1 = 0;
	while (colum1 <= 98)
	{
		colum2 = colum1 + 1;
		while (colum2 <= 99)
		{
			ft_print_columns(colum1);
			write(1, " ", 1);
			ft_print_columns(colum2);
			if (colum1 < 98)
			{
				write(1, ", ", 2);
			}
			colum2++;
		}
		colum1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
