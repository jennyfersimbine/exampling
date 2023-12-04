#include "main.h"
#include <fcntl.h>

int main(void)
{
	int fileD = 0;
	char *content = "Hello World";
	size_t c_len = 12;

	fileD = open("./txt", O_WRONLY);

	write(fileD, content, c_len);

	close(fileD);
	return (0);
}
