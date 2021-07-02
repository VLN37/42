/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 08:36:52 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/10 18:37:29 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//function prints sequences of three unique numbers from 000 through 999
void	print(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c == '7' && d == '8' && u == '9')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	logic(char c, char d, char u)
{
	while (1 == 1)
	{
		if (d < u && c < d)
			print(c, d, u);
		if (c == '7' && d == '8' && u == '9')
			break ;
		if (u == '9')
		{
			d++;
			u = '0';
		}
		if (d == '9')
		{
			c++;
			u = '0';
			d = '0';
		}
		u++;
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = 48;
	d = 49;
	u = 50;
	logic(c, d, u);
}
