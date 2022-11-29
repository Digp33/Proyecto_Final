#include <stdio.h>
#include <stdlib.h>
#include "FuncionesR.h"
int main(int argc, char *argv[]) {
	int selec;
	int val;
	do
	{
		printf("Ingrese que desea obtener:\n1)Triangulo.c\n2)Cuadrado.c\n3)Conversiones\n4)Factorial de un numero\n5)Suma de matrices\n6)Multiplicación de matrices\n7)transpuesta de una matriz 3x3\n8)Salario\n9)Salir");
		scanf("%i",&selec);
		fflush(stdin);
		switch (selec)
		{
		case 1:
			val= funTriangulo(selec);
			break;
		case 2:
			val=funCuadrilateros(selec);
			break;
		case 3:
			val= funConversion(selec);
			break;
		case 4:
			val=funFactorial(selec) ;
			break;
		case 5:
			val=funSumaMatriz(selec);
			break;	
		case 6:
			val=funMultiMatriz(selec);
			break;	
		case 7:
			val=funTransMatriz(selec);
			break;
		case 8:
			val=funSalario(selec);
			break;
		case 9:
			printf("Hasta Luego...\n");
			break;		
		default:
			printf("No existe la opcion, vuelva a ingresar...\n");
			break;
		}
	}while(selec!=9);
	
	return 0;
}
