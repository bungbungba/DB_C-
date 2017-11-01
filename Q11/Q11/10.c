#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h> // 저수준 io
#include <sys\stat.h>  // pmode parm
#include <sys\types.h> // <sys\stat.h>에 선언되어 있지만 에러가 날 수 있으니 선언해줌

#define BUFFERSIZE 4096

int main()
{
	int infd, outfd;
	char buffer[BUFFERSIZE];

	if ((infd = open("swallowing.mp4", O_RDONLY | O_BINARY)) < 0)
	{
		perror("Can't open file sleepy.png\n");
		exit(-1);
	}

	if ((outfd = open("copy.mp4", O_CREAT | O_WRONLY | O_BINARY)) < 0)
	{
		perror("Can't open file copy.png\n");
		exit(-1);
	}

	while (read(infd, buffer, BUFFERSIZE))
	{
		write(outfd, buffer, BUFFERSIZE);
	}
	close(infd);
	close(outfd);

	return 0;
}