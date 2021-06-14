/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 04:45:38 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/13 04:45:39 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int *p;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (&to_find[i] - j - 2);
			if (str[i] != to_find[j])
				j = 0;
		}
		i++;
	}
	to_find = "";
	return (to_find);
}
