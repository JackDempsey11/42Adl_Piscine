/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuvaric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:28:41 by msuvaric          #+#    #+#             */
/*   Updated: 2021/12/02 16:07:05 by jdempsey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}		
/* 
int main()
{
	char *arr  = "hello";

//  ## or you can do it like this
//	char *arr;
//	arr = "hello";
 

	ft_putstr(&arr[0]);
//	or you can do ft_putstr(arr);

	return(0);
}
*/
