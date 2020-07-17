/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobehrma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:17:54 by jobehrma          #+#    #+#             */
/*   Updated: 2020/07/13 12:26:03 by jobehrma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ft(int *nbr)
{
	
	*nbr = 42;
}

	int	main(void)
{
	int nbr;

	ft_ft(&nbr);
	ft_putchar((nbr / 10) + '0');
	ft_putchar((nbr % 10) + '0');
	ft_putchar('\n');
	return (0);
}
