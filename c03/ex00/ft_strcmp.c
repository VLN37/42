/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 04:45:06 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/13 04:45:10 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] < s2[j])
			return (-1);
		if (s1[i] > s2[j])
			return (1);
		i++;
		j++;
	}
	if (s1[i] == '\0' && s1[i] < s2[j])
		return (-1);
	else if (s2[j] == '\0' && s1[i] > s2[j])
		return (1);
	else
		return (0);
}
