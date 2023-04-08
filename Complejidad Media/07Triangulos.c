#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int lad1, lad2, lad3, i, j;
	for (i =1; i<4 ; i++){
			printf("Triangulo %d \n", i);
			//lado 1
			do {
			printf("ingrese el lado 1: ");
		    if (scanf("%d", &lad1) <=0){
		    	while(getchar() != '\n');
		    	printf("El numero ingresado es invalido, intente nuevamente. \n");
			}
	     	}while(lad1 <=0);
	     	//lado 2
			do {
			printf("ingrese el lado 2: ");
		    if (scanf("%d", &lad2) <=0){
		    	while(getchar() != '\n');
		    	printf("El numero ingresado es invalido, intente nuevamente. \n");
			}
	     	}while(lad1 <=0);
	     	//lado 3
			do {
			printf("ingrese el lado 3: ");
		    if (scanf("%d", &lad3) <=0){
		    	while(getchar() != '\n');
		    	printf("El numero ingresado es invalido, intente nuevamente. \n");
			}
	     	}while(lad1 <=0);
			//Condiciones para validar
		    if (lad1==lad2 & lad1==lad3 & lad2==lad3 ){
				printf("el triangulo %d es equilatero \n", i);
				printf("\n");
		    }
			else if (lad1!=lad2 & lad1 != lad3 & lad2!= lad3 ){
		    	printf("el triangulo %d es Isoceles \n", i);
		    	printf("\n");
			}
			else{
				printf("el triangulo %d es escaleno \n", i);
				printf("\n");
			}  	
	}	
		return 0;
}