/*
 ============================================================================
 Name        : hola-operativos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <commons/temporal.h>

int main (void){
	char nombre[20];
	char pantalla[20];
	printf("Ingrese una palabra:\n");
	gets(pantalla);
	strcpy(nombre,"Hola");
		if (strcmp(nombre,pantalla)!=0){
			puts(nombre);
			strcat(nombre,"pepe");
			char* tiempo= temporal_get_string_time();
			puts(tiempo);
			puts("!!!Hola Operativos!!!"); /* prints !!!Hello World!!! */				free(tiempo);
			puts(nombre);
			printf("El nombre ingresado por pantalla es: %s",pantalla);
								}
				else{
					puts("la palabra ingresada por pantalla es = Hola");
					}
}


