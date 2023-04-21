#include "libft.h"
#include <string.h>
#include <ctype.h>

int main()
{
	char haystack[30] = "aaabcabcd";

	printf("%s\n",ft_strnstr(haystack, "cd", 8));
	return 0;
}