#include "libftprintf.h"

int main(int argc, char** argv)
{
	(void)argc;
	//check_flags(&argv[1]);
	printf("%s\n",argv[1]);
	printf("%15.16d",0);
	return 0;
}