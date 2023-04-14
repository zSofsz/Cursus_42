#include "libft.h"
#include <string.h>

int main()
{
	char str[50]="mek\0ie";
	printf("%s\n%s\n",strchr(str,'\0'),ft_strchr(str,'\0'));
	return 0;
}