int		ft_islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += ('a' - 'A');
	return (c);
}