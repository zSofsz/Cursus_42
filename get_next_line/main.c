#include <fcntl.h>
#include "get_next_line.h"

int main()
{
	int fd = open("text.txt",O_RDONLY);
	printf("1%s",get_next_line(fd));
	printf("2%s",get_next_line(fd));
	//printf("3%s",get_next_line(fd));
	//printf("%s\n",get_next_line(fd));
	//printf("%s\n",get_next_line(fd));
	close(fd);
	return 0;
}