/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 08:35:21 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/07 11:56:51 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

//prints the character received as parameter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
