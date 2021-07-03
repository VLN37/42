int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (s1[i] - s2[j]);
	else if (s2[i] == '\0' && s1[i] != '\0')
		return (s1[i] - s2[j]);
	else
		return (0);
}
