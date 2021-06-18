/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 08:38:37 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/08 19:10:43 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '7' && c == '9' && d == '8'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
	else
	{
	}
}

void	logic(char a, char b, char c, char d)
{
	while (a <= '9' && b <= '9' && c <= '9' && d <= '9')
	{
		if (c > a && d > b + 1)
			print(a, b, c, d);
		if (a == '9' && b == '9' && c == '9' && d == '9')
			break ;
		if (b == '9' && c == '9' && d == '9')
		{
			a++;
			b = '0';
			c = '0';
			d = '0';
		}
		if (c == '9' && d == '9')
		{
			b++;
			c = 48;
			d = 48;
		}
		if (d == 57)
		{
			c++;
			d = 48;
		}
		d++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 48;
	b = 48;
	c = 48;
	d = 49;
	logic(a, b, c, d);
}

if (b == '9' c == '9' d == '9')
{
	a = a + '1'
	b = '0'
	c = a + 1
}

if (c == '9' && d == '9')
{
	d = b + 1
	c = d + 1
}
if(d == '9')
{
	c = '0'
}


if 