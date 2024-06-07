#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "lib.h"

#define RASPBERRYPI
#define DEBUG

void count_down(int cnt);

int main(void)
{
	int num;
	standby();

	// count down
	int cnt = 9;
	count_down(cnt);

	clear();

	deleteFile();

	return 0;
}

void count_down(int cnt)
{
	int i = cnt;
	while (i > -1)
	{
#ifdef DEBUG
		fprintf(stderr, "%d seconds left.\n", i);
#endif
		set_seg(i);
		sleep(1);
		i--;
		clear();
	}

	return;
}