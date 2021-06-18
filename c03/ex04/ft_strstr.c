/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 04:45:38 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/16 19:56:04 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find) 
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			j++;
			i++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
			if (str[i] != to_find[j])
				j = 0;
		}
		i++;
	}
	str = 0;
	return (str);
}
