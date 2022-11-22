#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define N 10
#define M 10
#define L 3


int triangulo(int x) 
{
	//Declaramos las variables a utilizar tanto para que el usuario digite los datos como para los resultados
	int ladoA,ladoB,ladoC;
	int altura;
	float resultadoArea;
	float resultadoPerimetro;
	//Declaramos la variable que nos va a dar pauta a el uso del Switch-case y el Do-while
	char selec;
	//Inicializamos el Do-while el cual se va a 
	do
	{
		printf("Ingrese que desea obtener:\n A)Area de el triangulo\nB)Perimetro de un triangulo\nC)Regresar al menu\n");
		scanf("%c",&selec);
		switch (selec)
		{
		case 'A':
			printf("Ingrese la base del triangulo: \n");
			scanf("%d",&ladoA);
			fflush(stdin);
			printf("Ingrese la altura del triangulo: \n");
			scanf("%d",&altura);
			fflush(stdin);
			resultadoArea=((ladoA*altura)/2);
			printf("El resultado es: %f\n", resultadoArea);
			break;
		case 'B':
			printf("Ingrese el lado A del triangulo: \n");
			scanf("%d",&ladoA);
			fflush(stdin);
			printf("Ingrese el lado B del triangulo: \n");
			scanf("%d",&ladoB);
			fflush(stdin);
			printf("Ingrese el lado C del triangulo: \n");
			scanf("%d",&ladoC);
			fflush(stdin);
			resultadoPerimetro=ladoA+ladoB+ladoC;
			printf("El resultado es: %f\n", resultadoPerimetro);
			break;
		case 'C':
			printf("Gracias por usar esta funcion :)\n");
			break;
		default:
			printf("\nLa opcion no es la correcta, vuelva a intentar\n");
			fflush(stdin);
			break;
		}
	}while (selec!='C');
	return 0;
}
int cuadrados(int x) 
{
	
	int ladoA,ladoB;
	float resultadoArea;
	float resultadoPerimetro;
	int selec;
	do
	{
		printf("Ingrese que desea obtener:\n1)Area del Cuadrado\n2)Perimetro del cuadrado\n3)Area de un rectangulo\n4)Perimetro del rectangulo\n5)Regresar al menu\n");
		scanf("%i",&selec);
		fflush(stdin);
		switch (selec)
		{
		case 1:
			printf("Ingrese el lado del cuadrado \n");
			scanf("%d",&ladoA);
			fflush(stdin);
			resultadoArea=ladoA*ladoA;
			printf("El resultado del Area es: %f\n", resultadoArea);
			break;
		case 2:
			printf("Ingrese el lado del cuadrado \n");
			scanf("%d",&ladoA);
			fflush(stdin);
			resultadoPerimetro=ladoA*4;
			printf("El resultado del perimetro es: %f\n", resultadoPerimetro);
			break;
		case 3:
			printf("Ingrese el lado menor del rectangulo \n");
			scanf("%d",&ladoA);
			printf("Ingrese el lado mayor del rectangulo \n");
			scanf("%d",&ladoB);
			fflush(stdin);
			resultadoArea=ladoA*ladoB;
			printf("El resultado del Area es: %f\n", resultadoArea);
			break;
		case 4:
			printf("Ingrese el lado menor del rectangulo\n");
			scanf("%d",&ladoA);
			fflush(stdin);
			printf("Ingrese el lado mayor del rectangulo \n");
			scanf("%d",&ladoB);
			fflush(stdin);
			resultadoPerimetro=((ladoA*2)+(ladoB*2));
			printf("El resultado del perimetro es: %f\n", resultadoPerimetro);
			break;
		case 5:
			printf("Gracias por usar esta funcion :)\n");
			break;
		default:
			printf("\nLa opcion no es la correcta, vuelva a intentar\n");
			fflush(stdin);
			break;
		}
	}while(selec!=5);
	return 0;
}
int conversiones(int x) 
{
	float gradosC,gradosF,gradosK;
	float conversionC,conversionF,conversionK;
	int selec;
	do
	{
		printf("Ingrese que desea obtener:\n1)Celcius a Kelvin y Farenheit\n2)Kelvin a Celcius y Farenheit\n3)Farenheit a Celcius y kelvin\n4)Regresar al menu\n");
		scanf("%i",&selec);
		fflush(stdin);
		switch(selec)
		{
		case 1:
			printf("Ingrese los grados \n");
			scanf("%f",&gradosC);
			fflush(stdin);
			conversionF=(gradosC*(1.8))+32;
			conversionK=gradosC+ 273.15;
			printf("Los grados en Farenheit son: %f\n", conversionF);
			printf("Los grados en Kelvin son: %f\n", conversionK);
			fflush(stdin);
			break;
		case 2:
			printf("Ingrese los grados \n");
			scanf("%f",&gradosF);
			fflush(stdin);
			conversionC=(gradosF-32)*(.555);
			conversionK=((.555)*(gradosF-32))+273.15;
			printf("Los grados en Kelvin son: %f\n", conversionK);
			printf("Los grados en Celcius son: %f\n", conversionC);
			fflush(stdin);
			break;
		case 3:
			printf("Ingrese los grados \n");
			scanf("%f",&gradosK);
			fflush(stdin);
			conversionC=gradosK-273.15;
			conversionF=((gradosK-273.15)*(1.8))+32;
			printf("Los grados en Celcius son: %f\n", conversionC);
			printf("Los grados en Farenheit son: %f\n", conversionF);
			fflush(stdin);
			break;
		case 4:
			printf("Gracias por usar esta funcion :)\n");
			break;
		default:
			printf("\nLa opcion no es la correcta, vuelva a intentar\n");
			fflush(stdin);
			break;
		}

	}while(selec!=4);
	return 0;
}

void leer_matriz(int A[N][M], int F, int C)
{
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%d][%d]\n",i,j );
			scanf("%d",&A[i][j]);
			//fflush(stdin);
		}
	}
}

void imprimir_matriz(int A[N][M],int F,int C)
{
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}

int matriz1(int x) 
{
	int F,C, i,j;
	int mac1[N][M],mac2[N][M];
	int macR[N][M];
	printf("Ingrese el numero de filas\n");
	scanf("%d",&F);
	printf("ingrese el numero de las columnas\n");
	scanf("%d",&C);
	printf("Primer matriz\n");
	leer_matriz(mac1,F,C);
	printf("Segunda matriz\n");
	leer_matriz(mac2,F,C);
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			macR[i][j]=mac1[i][j]+mac2[i][j];
		}
	}
	printf("La matriz uno es:\n");
	imprimir_matriz(mac1,F,C);
	printf("La matriz dos es: \n");
	imprimir_matriz(mac2,F,C);
	printf("Matriz resultado\n");
	imprimir_matriz(macR,F,C);

	return 0;
}

void multiplicar(int A[N][M],int B[N][M],int Re[N][M],int f1,int cf,int c2)
{
	int i,j,k;
	//Limpiar matriz para que al momento de hacer la operación no tenga basura que pueda interferir
	for(i=0;i<f1;i++)
	{
		for (j = 0; j < c2; j++)
		{
			Re[i][j]=0;
		}
	}

	for(i=0;i<f1;i++)
	{
		for (j = 0; j<cf; j++)
		{
			for (k = 0; k < c2; k++)
				{
					Re[i][k]= Re[i][k]+A[i][j]*B[j][k];
				}	
		}
	}
}

int matriz2(int x) 
{
	int F,C, i,j;
	int P;
	int mac1[N][M],mac2[N][M];
	int macR[N][M];
	printf("Primer matriz\n");
	printf("Ingrese el numero de filas\n");
	scanf("%d",&F);
	printf("ingrese el numero de las columnas\n");
	scanf("%d",&C);
	leer_matriz(mac1,F,C);
	printf("Segunda matriz\n");
	printf("Para que la multiplicaciónse efectúe, las filas de la segunda matriz deben de ser igual a las columnas de la primera\n");
	printf("ingrese el numero de las columnas\n");
	scanf("%d",&P);
	leer_matriz(mac2,C,P);
	multiplicar(mac1,mac2,macR,F,C,P);
	printf("La matriz uno es:\n");
	imprimir_matriz(mac1,F,C);
	printf("La matriz dos es: \n");
	imprimir_matriz(mac2,C,P);
	printf("Matriz resultado\n");
	imprimir_matriz(macR,F,P);
	return 0;
}

int factorial(int x) 
{
	int nFac;
	int reFac=1;
	int i;
	printf("Ingrese el numero del cual quiere el factorial\n");
	scanf("%d",&nFac);
	if(nFac==0)
	{
		printf("\nEl factorial es 1");
	}else if(nFac<0)
		{
			printf("\nEste programa no da el factorial de numeros negativos\n");
		}else
		{
			for ( i = 1; i <= nFac; i++)
			{
				reFac=reFac*i;
			}
			printf("\nEl Valor del factorial de %d es: %d\n",nFac,reFac );
		}
	
	return 0;
}

void transpuesta(int A[L][L],int B[L][L],int espacio)
{
	int i,j;
	for(i=0;i<L;i++)
	{
		for (j = 0; j < L; j++)
		{
			B[j][i]=A[i][j];
		}
	}
}

int matriz3(int x)
 {
	int A[L][L],B[L][L],i,j;
	printf("Este programa da el resultado de una matriz transpuesta de 3x3\n");
	printf("Por favor, ingrese la matriz:\n");
	leer_matriz_Tra(A,L,L);
	transpuesta(A,B,L);
	printf("La matriz original es:\n");
	imprimir_matriz_Tra(A,L,L);
	printf("La matriz transpuesta es:\n");
	imprimir_matriz_Tra(B,L,L);
	return 0;
}

void leer_matriz_Tra(int A[L][L], int F, int C)
{
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%d][%d]\n",i,j );
			scanf("%d",&A[i][j]);
			//fflush(stdin);
		}
	}
}
void imprimir_matriz_Tra(int A[L][L],int F,int C)
{
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}

