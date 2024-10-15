int		ft_isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= ('a' - 'A');
	return (c);
}