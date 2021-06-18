/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultimate_div_mod.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:38:04 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/10 11:38:06 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempdiv;
	int	tempmod;

	if (b != 0)
	{
		tempdiv = *a / *b;
		tempmod = *a % *b;
		*a = tempdiv;
		*b = tempmod;
	}
}
