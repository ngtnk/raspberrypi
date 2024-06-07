#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "onoff.h"

int main(void) {
	on9();
	usleep(1000000);
	off9();
	on8();
	usleep(1000000);
	off8();
	on7();
	usleep(1000000);
	off7();
	on6();
	usleep(1000000);
	off6();
	on5();
	usleep(1000000);
	off5();
	on4();
	usleep(1000000);
	off4();
	on3();
	usleep(1000000);
	off3();
	on2();
	usleep(1000000);
	off2();
	on1();
	usleep(1000000);
	off1();
	on0();
	usleep(1000000);
	off0();

	return 0;
}