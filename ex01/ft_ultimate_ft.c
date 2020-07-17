/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobehrma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:30:48 by jobehrma          #+#    #+#             */
/*   Updated: 2020/07/15 08:40:04 by jobehrma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char ptr);
void ft_putnbr(int ptr);

int main(void)
{
	int a;
	int *ptr;

	a = 3;
	ptr = &a;	
	ft_putnbr(*ptr);
	a = 42;
	return (0);
}

