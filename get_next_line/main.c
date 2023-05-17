#include <fcntl.h>
#include "get_next_line.h"

int main()
{
	int fd = open("text.txt",O_RDONLY);
	printf("%s\n",get_next_line(fd));
	printf("%s\n",get_next_line(fd));
	close(fd);
	return 0;
}