#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main(int argc, char *argv[]) {
	int selec;
	int val;
	do
	{
		printf("Ingrese que desea obtener:\n1)Triangulo.c\n2)Cuadrado.c\n3)Conversiones\n4)Suma de matrices\n5)Multiplicación de matrices\n6)Factorial de un numero\n7)transpuesta de una matriz 3x3\n8)Salir");
		scanf("%i",&selec);
		fflush(stdin);
		switch (selec)
		{
		case 1:
			val=triangulo(selec);
			break;
		case 2:
			val=cuadrados(selec);
			break;
		case 3:
			val=conversiones(selec);
			break;
		case 4:
			val=matriz1(selec);
			break;
		case 5:
			val=matriz2(selec);
			break;	
		case 6:
			val=factorial(selec);
			break;	
		case 7:
			val=matriz3(selec);
			break;
		case 8:
			printf("Hasta Luego...\n");
			break;		
		default:
			printf("No existe la opcion, vuelva a ingresar...\n");
			break;
		}
	}while(selec!=4);
	
	return 0;
}