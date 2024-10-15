#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;

	if (!dst || !src)
		return (0);
	i = 0;
    char *d = dst;
    const char *s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

int main ()
{
    char src[] = "Hello, World!";
    char dst[20];
    int nums_src[] = {1, 2, 3, 4, 5};
    int nums_dst[5];

    ft_memcpy(dst,src, sizeof(src));
}