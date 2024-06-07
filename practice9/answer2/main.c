#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "lib.h"

#define MAX 62
#define DEBUG
#define RASPBERRYPI

typedef struct Morse {
	char letter;
	char signal[6];
}Morse;

Morse M[MAX];

void load_data(void);
void light_up(Morse M);

int main(void) {
	load_data();

	char str[100];
	int i = 0;
	puts("Input a sentence: ")
	fgets(str, 100, stdin);
#ifdef RASPBERRYPI
	standby();
#endif

	while (str[i]) {
		if (str[i] == ' ') {
			printf("hankaku space\n");
			usleep(400000);
		}
		else {
			for (int j = 0; j < MAX; j++) {
				if (str[i] == M[j].letter) {
					light_up(M[j]);
					break;
				}
			}
		}
		i++;
	}

#ifdef RASPBERRYPI
	deleteFile();
#endif

	return 0;
}

void load_data(void) {
	FILE* fp;
	int i;
	fp = fopen("./dict.csv", "r");

	for (i = 0; i < MAX; i++) {
		fscanf(fp, "%c,%s\n", &M[i].letter, &M[i].signal);
	}

	fclose(fp);

	return;
}

void light_up(Morse M) {
	for (int i = 0; M.signal[i]; i++) {
		if (M.signal[i] == '.') {
			printf("%c\t", '.');
#ifdef RASPBERRYPI
			ton();
#endif
		}
		else if (M.signal[i] == '-') {
			printf("%c\t", '-');
#ifdef RASPBERRYPI
			tsu();
#endif
		}
	}
	printf("\n");
#ifdef RASPBERRYPI
	usleep(2000000);
#endif

	return;
}