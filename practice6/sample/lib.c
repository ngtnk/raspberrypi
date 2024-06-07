#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define GPIO "/sys/class/gpio/gpio"
#define EXPORT "/sys/class/gpio/export"
#define UNEXPORT "/sys/class/gpio/unexport"
#define DEBUG

void clear(void);

int pins[8] = {17, 27, 22, 23, 24, 25, 5, 6};
int num2pins[10][8] = {{5, 6, 22, 23, 27, 17, 25},
					   {6, 22, 23},
					   {5, 6, 24, 17, 27, 23},
					   {5, 6, 24, 22, 27, 23},
					   {25, 24, 6, 22, 23},
					   {5, 25, 24, 22, 27, 23},
					   {5, 25, 24, 17, 22, 27, 23},
					   {5, 6, 22, 23},
					   {5, 6, 22, 27, 17, 25, 24, 23},
					   {5, 6, 22, 27, 25, 24, 23}};

void standby(void)
{
	int fd = 0;
	char pin_name[3]; // exchange pin number into string
	char path[33];	  // to assign file path

	for (int i = 0; i < sizeof(pins) / sizeof(int); i++)
	{
		// set pin_name
		sprintf(pin_name, "%d", pins[i]);
#ifdef DEBUG
		fprintf(stderr, "[pin_name] %s\n", pin_name);
#endif

		// export
		fd = open(EXPORT, O_WRONLY);
		write(fd, pin_name, 2);
		close(fd);
		sleep(1);

		// set direction
		sprintf(path, "%s%d/direction", GPIO, pins[i]);
		fd = open(path, O_WRONLY);
		if (fd == -1)
		{
			return;
		}
		write(fd, "out", 3);
		close(fd);
	}

	clear();

	return;
}

void set_v(int pin_num, char *val)
{
	int fd = 0;
	char path[33];
	sprintf(path, "%s%d/value", GPIO, pin_num);
	fd = open(path, O_WRONLY);
	write(fd, val, 2);
	close(fd);

	return;
}

void clear(void)
{
	for (int i = 0; i < sizeof(pins) / sizeof(int); i++)
	{
		set_v(pins[i], "1");
	}

	return;
}

void set_seg(int digit)
{
	for (int i = 0; i < sizeof(num2pins[digit]) / sizeof(int); i++)
	{
		set_v(num2pins[digit][i], "0");
	}
	return;
}

void deleteFile(void)
{
	int fd = 0;
	char pin_name[3]; // exchange pin number into string
	char path[33];	  // to assign file path

	for (int i = 0; i < sizeof(pins) / sizeof(int); i++)
	{
		// set pin_name
		sprintf(pin_name, "%d", pins[i]);

		// set value
		sprintf(path, "%s%d/value", GPIO, pins[i]);
		fd = open(path, O_WRONLY);
		write(fd, "0", 2);
		close(fd);

		// set direction
		sprintf(path, "%s%d/direction", GPIO, pins[i]);
		fd = open(path, O_WRONLY);
		write(fd, "in", 3);
		close(fd);

		// unexport
		fd = open(UNEXPORT, O_WRONLY);
		write(fd, pin_name, 2);
		close(fd);
	}

	return;
}