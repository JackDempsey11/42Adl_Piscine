/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuvaric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 08:14:28 by msuvaric          #+#    #+#             */
/*   Updated: 2021/12/02 16:00:40 by jdempsey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
    int a;
    int b;
    int divr;
    int modr;
    a = 42;
    b = 10;
    divr = 0;
    modr = 0;

	##	what you can also do is remove the a and b 
		variable decleration and initialisation above
   		and input the value of a and b directly 
		into the function ft_div below)

	printf("%d, %d, %d, %d \n", a,b,divr,modr);
    ft_div_mod(a, b, &divr, &modr);
    printf("%d, %d, %d, %d \n", a,b,divr,modr);
    return(0);
}
*/
