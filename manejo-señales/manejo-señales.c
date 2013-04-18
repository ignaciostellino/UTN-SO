/*
 * manejo-señales.c
 *
 *  Created on: 18/04/2013
 *      Author: utnso
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

void rutina (int n) {
	switch (n) {
		case SIGINT:
			sleep(2);
			printf("No salgo nada… te cabio\n");
		break;
		case SIGUSR1:
			sleep(3);
			printf("LLEGO SIGUSR1\n");
		break;
	}
}

int main (void) {
	signal(SIGINT, rutina);
	signal(SIGUSR1, rutina);
	while(1) {
		sleep(2);
		printf("Hola Mundo\n");
	}
}
