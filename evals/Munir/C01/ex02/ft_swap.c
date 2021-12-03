/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuvaric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:08:42 by msuvaric          #+#    #+#             */
/*   Updated: 2021/12/02 15:57:27 by jdempsey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int main()

{
	int x;
	int y;
	int *a;
	int *b;
	int tmp;

	x = 42;
	y = 23;
	
	a = &x;
	b = &y;


int	main(void)
{

	int x;
	int y;

	x = 42;
	y = 23;

	printf("%d ", x);
	printf("%d ", y);

	tmp = *a;
	*a = *b;
	*b = tmp;


	ft_swap(&x, &y);

	printf("%d ", x);
	printf("%d ", y);
	return (0);
}
*/
