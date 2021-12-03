/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:11:12 by iwillmot          #+#    #+#             */
/*   Updated: 2021/12/01 14:58:50 by jdempsey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	temp;
	int	temp2;
	int	count;

	count = 0;
	size--;
	while (count <= size / 2)
	{
		temp = tab[count];
		temp2 = tab[size - count];
		tab[size - count] = temp;
		tab[count] = temp2;
		count++;
	}
}

int	main(void)
{
	int	count;
	int	size;	

	count = 0;
	size = 5;
	int nums[size];

	while (count <= size)
	{
		nums[count] = count;
		printf("%d", nums[count]);
		printf(" ");
		count++;
	}
	printf("\n");
	ft_rev_int_tab(nums, size);
	count = 0;
	while (count <= size)
	{
		printf("%d", nums[count]);
		printf(" ");
		count++;
	}
	return (0);
}
