/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 18:03:48 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/18 00:57:27 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	multi;

	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (power < 1)
		return (0);
	multi = nb;
	while (power > 1)
	{
		nb = nb * multi;
		power--;
	}
	return (nb);
}
