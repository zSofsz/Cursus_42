#include "libft.h"
#include <string.h>
#include <ctype.h>

int main()
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	printf("%s", (char *)ft_memchr(tab, -1, 7));
	return 0;
}