/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuvaric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:42:26 by msuvaric          #+#    #+#             */
/*   Updated: 2021/12/02 16:09:23 by jdempsey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
int main(void)
{
	int length;
	char *str;
	str = "hello";
//	char key[3]={'k','e','y'};
	length = ft_strlen(key);

	printf("%d",length);

	return(0);
}
*/
