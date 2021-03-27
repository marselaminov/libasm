#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

size_t	strlen(const char *s);

int		main()
{
	printf("\n | FT_STRLEN | \n");
	printf("\"test\" : %ld\n", ft_strlen("test"));
	printf("\"test,test\" : %ld\n", ft_strlen("test,test"));
	printf("\"test,test,test\" : %ld\n", ft_strlen("test,test,test"));
}