:/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuvaric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 08:26:38 by msuvaric          #+#    #+#             */
/*   Updated: 2021/12/02 16:02:35 by jdempsey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
/*
int main(void)
{
    int a;
    int b;
    a = 42;
    b = 10;
    printf("%d, %d \n", a,b);
    ft_ultimate_div_mod(&a,&b);
    printf("%d, %d", a,b);
    return(0);
}
*/
