#include<stdlib.h>

int	ft_strlen(char **str, int size)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	j = 0;
	counter = 1;
	while (i < size)
	{
		while (str[i][j])
		{
			j++;
		}
		counter += j;
		j = 0;
		i++;
	}
	return (counter);
}

int	ft_strlen2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		destsize;

	i = 0;
	dest = NULL;
	if (size == 0)
		return (dest);
	destsize = (ft_strlen(strs, size) + ((ft_strlen2(sep) * (size - 1))));
	dest = (char *)malloc(sizeof(char) * destsize);
	while (i < destsize)
	{
		dest[i] = '\0';
		i++;
	}
	i = 0;
	while (i < size)
	{
		dest = ft_strcpy(strs[i], dest);
		i++;
		if (i < size)
			dest = ft_strcpy(sep, dest);
	}
	return (dest);
}
