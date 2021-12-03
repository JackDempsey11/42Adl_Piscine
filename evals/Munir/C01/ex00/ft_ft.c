/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuvaric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 08:42:55 by msuvaric          #+#    #+#             */
/*   Updated: 2021/12/02 15:51:20 by jdempsey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int a;
	int *nbr;
	a = 10;
	nbr = &a;
	printf("%d\n", *nbr);
	printf("%p\n", &a);
	printf("%p\n", &nbr);

	ft_ft(&a);
	
	printf("%d", *nbr);
	return(0);
}
*/
/*

int	main(void)
{
	int a
	a = 23

	printf("%d", a);
	
	ft_ft(&a);

	printf("%d", a);
	return(0);
}
*/
