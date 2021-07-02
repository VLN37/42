/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 08:34:57 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/08 23:32:34 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

//prints the entire alphabet
void	ft_print_alphabet (void)
{
	char	c;

	c = 97;
	while (c < 123)
	{
		write(1, &c, 1);
		c++;
	}
}
