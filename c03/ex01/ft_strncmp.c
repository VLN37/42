/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 04:45:18 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/13 04:45:19 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;

	j = 0;
	i = 0;

		while (s1[i] != '\0'|| s2[j] != '\0')
		{
			if (s1[i] < s2[j])
				return (-1);
			if (s1[i] > s2[j])
				return (1);
			if (i > n || j > n)
				return (0);
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
