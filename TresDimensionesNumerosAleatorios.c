#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sinRepetir(int numeroAleatorio, int arreglo[3][3]){
	int i;
	int j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(numeroAleatorio == arreglo[i][j]){
				return 1;
			}
		}
	}
	
}

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	int arreglo[3][3];
	int i;
	int j;
	int numeroAleatorio;
	
	for(i = 0; i < 3; i++){
		printf("|");
		for(j = 0; j < 3; j++){
			while(sinRepetir(numeroAleatorio, arreglo)){
				numeroAleatorio = 1 + rand() % 9;
			}
			arreglo[i][j] = numeroAleatorio;
			printf("%i", arreglo[i][j]);
		}
		printf("|");
		printf("\n");
	}
	
	return 0;
}
