/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_lenrecursive.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:46:24 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/09 17:50:04 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recursive(int counter)
{
	if (counter > 9)
	{
		recursive(counter / 10);
		recursive(counter % 10);
	}
	else
	{
		ft_putchar(counter + '0');
	}
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
	ft_putchar('\n');
	recursive(counter);
	return (counter);
}
