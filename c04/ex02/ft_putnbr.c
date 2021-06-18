/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:44:16 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/16 10:16:28 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recursive(int nb)
{
	if (nb > 9 || nb < -9)
	{
		recursive(nb / 10);
		recursive(nb % 10);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar(nb + '0');
	}
	else
		ft_putchar(nb + '0');
}

void	(ft_putnbr(int nb))
{
	if (nb < 0)
	{
		write(1, "-", 1);
	}
	recursive(nb);
}
