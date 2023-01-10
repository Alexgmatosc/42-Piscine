/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:53:39 by alematos          #+#    #+#             */
/*   Updated: 2022/11/23 02:43:18 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z')
			|| (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}	
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_str_is_alpha("ABCDdkmfvmaksASDasd"));
	printf("\n%d", ft_str_is_alpha("asdasdanksdm"));
	printf("\n%d", ft_str_is_alpha("-_545LLLasssdajhbjbn"));
	printf("\n%d", ft_str_is_alpha(""));
	return (0);
}*/
