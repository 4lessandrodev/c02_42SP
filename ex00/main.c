#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[7];
	char	src[7];
	int		size;

	src[0] = 't';
	src[1] = 'e';
	src[2] = 's';
	src[3] = 't';
	src[4] = 'e';
	src[5] = ' ';
	src[6] = '!';

	ft_strcpy(dest, src);
	size = 0;
	while(dest[size] != '\0')
	{
		printf("%c\n", dest[size]);
		size++;
	}
	return (0);
}
