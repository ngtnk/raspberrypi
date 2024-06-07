#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define EXPORT "/sys/class/gpio/export"
#define UNEXPORT "/sys/class/gpio/unexport"
#define DIRECTION "/sys/class/gpio/gpio18/direction"
#define VALUE "/sys/class/gpio/gpio18/value"
#define MILLISECOND 1000

void standby(void) {
	int fd = 0;
	fd = open(EXPORT, O_WRONLY);
	write(fd, "18", 2);
	close(fd);
	usleep(3000 * MILLISECOND);

	fd = open(DIRECTION, O_WRONLY);
	write(fd, "out", 3);
	close(fd);


	return;
}

void on(void) {
	int fd = 0;
	fd = open(VALUE, O_WRONLY);
	write(fd, "1", 2);
	close(fd);
	return;
}

void off(void) {
	int fd = 0;
	fd = open(VALUE, O_WRONLY);
	write(fd, "0", 2);
	close(fd);
	return;
}

void ton(void) {
	on();
	usleep(300 * MILLISECOND);
	off();
	usleep(100 * MILLISECOND);
	return;
}

void tsu(void) {
	on();
	usleep(900 * MILLISECOND);
	off();
	usleep(100 * MILLISECOND);
	return;
}

void deleteFile(void) {
	int fd = 0;
	fd = open(UNEXPORT, O_WRONLY);
	write(fd, "18", 2);
	close(fd);
	return;
}