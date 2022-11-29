//Se incluyen librerias y se define una constante a utilizarse
#include <stdio.h>
#include <stdlib.h>
#include "FuncionesR.h"
#define G 3
#define N 10

int funTriangulo(int x) {
	//Declaramos las variables a utilizar tanto para que el usuario digite los datos como para los resultados
	int sideA,sideB,sideC;
	int altura;
	float resultadoArea;
	float resultadoPerimetro;
	//Declaramos la variable que nos va a dar pauta a el uso del Switch-case y el Do-while
	int selec;
	//Inicializamos el Do-while el cual se va a 
	do
	{
		//Se le pide al usuario que ingrese la opcion deseada
		printf("Que desea obtener?:\n 1)Area del triangulo\n2)Perimetro de un triangulo\n3)Regresar/terminar\n");
		scanf("%d",&selec);
		fflush(stdin);
		switch (selec)
		{
		case 1:
			//Si selecciona la opcion uno se le van a pedir los datos para obtener el area
			printf("Ingrese la base del triangulo: \n");
			scanf("%d",&sideA);
			fflush(stdin);
			printf("Ingrese la altura del triangulo: \n");
			scanf("%d",&altura);
			fflush(stdin);
			resultadoArea=((sideA*altura)/2);
			printf("El resultado es: %f\n", resultadoArea);

			break;
		case 2:
			//Si selecciona la opción dos se le piden los datos para obtener el perimetro
			printf("Ingrese el lado A del triangulo: \n");
			scanf("%d",&sideA);
			fflush(stdin);
			printf("Ingrese el lado B del triangulo: \n");
			scanf("%d",&sideB);
			fflush(stdin);
			printf("Ingrese el lado C del triangulo: \n");
			scanf("%d",&sideC);
			fflush(stdin);
			resultadoPerimetro=sideA+sideB+sideC;
			printf("El resultado es: %f\n", resultadoPerimetro);
			break;
		case 3:
			//la opción tres es la salida de la función triangulo

			printf("Gracias por usar esta funcion :)\n");
			break;
		default:
			//El default es por si no ingresa ningun valor indicado
			printf("\nIncorrecto, seleccione una opción valida\n");
			fflush(stdin);
			break;
		}
	}while (selec!=3);
	return 0;
}

//Inicialización de la funcion Cuadrados
int funCuadrilateros(int x) {
	/*Se declaran las variables, enteras para los datos de entrada del usuario,  flotantes para los valores a obtener
	 puesto que podría haber divisiones que hagan que el resultado tenga punto decimal*/
	int ladoCua,ladoRe,ladoTra;
	float resultadoArea;
	float resultadoPerimetro;
	//Variable entera para la selección de la accion de la función
	int selec;
	//Se inicia el Do-while que acabará cuando se ponga la opcion de salida, si mete un dato erroneo dará un mensaje de alerta
	do
	{
		//Solicitar al usuario la opcion deseada
		printf("Que desea obtener?:\n1)Area del Cuadrado\n2)Perimetro del cuadrado\n3)Area de un rectangulo\n4)Perimetro del rectangulo\n5)Area de un trapecio\n6)Regresar al menu\n");
		scanf("%i",&selec);
		fflush(stdin);
		switch (selec)
		{
		case 1:
			//Area de un cuadrado, se solicita el lado como dato de entrada
			printf("Ingrese el lado del cuadrado \n");
			scanf("%d",&ladoCua);
			fflush(stdin);
			resultadoArea=ladoCua*ladoCua;
			printf("El resultado del Area es: %f\n", resultadoArea);
			break;
		case 2:
			//Perimetro de un cuadrado, se solicita el lado como dato de entrada
			printf("Ingrese el lado del cuadrado \n");
			scanf("%d",&ladoCua);
			fflush(stdin);
			resultadoPerimetro=ladoCua*4;
			printf("El resultado del perimetro es: %f\n", resultadoPerimetro);
			break;
		case 3:
			//Area de un rectangulo, se solicitan los lados como datos de entrada
			printf("Ingrese el lado menor del rectangulo \n");
			scanf("%d",&ladoCua);
			printf("Ingrese el lado mayor del rectangulo \n");
			scanf("%d",&ladoRe);
			fflush(stdin);
			resultadoArea=ladoCua*ladoRe;
			printf("El resultado del Area es: %f\n", resultadoArea);
			break;
		case 4:
			//Perimetro de un rectangulo, se solicitan los lados como datos de entrada
			printf("Ingrese el lado menor del rectangulo\n");
			scanf("%d",&ladoCua);
			fflush(stdin);
			printf("Ingrese el lado mayor del rectangulo \n");
			scanf("%d",&ladoRe);
			fflush(stdin);
			resultadoPerimetro=((ladoCua*2)+(ladoRe*2));
			printf("El resultado del perimetro es: %f\n", resultadoPerimetro);
			break;
		case 5:
			//Area de un trapecio, se solicitan los lados como datos de entrada así como la altura
			printf("Ingrese el lado menor del Trapecio\n");
			scanf("%d",&ladoCua);
			fflush(stdin);
			printf("Ingrese el lado mayor del trapecio \n");
			scanf("%d",&ladoRe);
			fflush(stdin);
			printf("Ingrese la altura del trapecio \n");
			scanf("%d",&ladoTra);
			fflush(stdin);
			resultadoArea=((ladoCua+ladoRe)*ladoTra)/2;
			printf("\nEl area es: %f\n", resultadoArea );
			break;
		case 6:
			//la opción 6 marca la salida de la función
			printf("Gracias por usar esta funcion :)\n");
			break;
		default:
			printf("\nIncorrecto, seleccione una opción valida\n");
			fflush(stdin);
			break;
		}
	}while(selec!=6);
	return 0;
}

//Se inicia con la funcion de conversiones
int funConversion(int x) {
	//Se crean las variables de entrada y de salida, para esta ocacion se solicitan float ya que pueden tener decimales
	float celciusG,farenheitG,kelvinG;
	float resultadoCelcius,resultadoFarenheit,resultadoKelvin;
	//se crea el selector del case
	int selec;
	do
	{
		// Se pide al usuario que ingrese la opcion solicitada
		printf("Ingrese que grados va a ingresar:\n1)Celcius\n2)Kelvin\n3)Farenheit\n4)Regresar al menu\n");
		scanf("%i",&selec);
		fflush(stdin);
		switch(selec)
		{
		case 1:
			//Convierte los grados Celcius a farenheit y a kelvin
			printf("Ingrese los grados \n");
			scanf("%f",&celciusG);
			fflush(stdin);
			//operaciones para hacer los cambios a las otras dos formas de grados
			resultadoFarenheit=(celciusG*(1.8))+32;
			resultadoKelvin=celciusG+ 273.15;
			printf("Los grados en Farenheit son: %f\n", resultadoFarenheit);
			printf("Los grados en Kelvin son: %f\n", resultadoKelvin);
			fflush(stdin);
			break;
		case 2:
			//convierte los grados farenheit a celcius y kelvin
			printf("Ingrese los grados \n");
			scanf("%f",&farenheitG);
			fflush(stdin);
			//operaciones para hacer los cambios a las otras dos formas de grados
			resultadoCelcius=(farenheitG-32)*(.555);
			resultadoKelvin=((.555)*(farenheitG-32))+273.15;
			printf("Los grados en Kelvin son: %f\n", resultadoKelvin);
			printf("Los grados en Celcius son: %f\n", resultadoCelcius);
			fflush(stdin);
			break;
		case 3:
			//convierte los grados kelvin a celcius y a  farenheit
			printf("Ingrese los grados \n");
			scanf("%f",&kelvinG);
			fflush(stdin);
			//operaciones para hacer los cambios a las otras dos formas de grados
			resultadoCelcius=kelvinG-273.15;
			resultadoFarenheit=((kelvinG-273.15)*(1.8))+32;
			printf("Los grados en Celcius son: %f\n", resultadoCelcius);
			printf("Los grados en Farenheit son: %f\n", resultadoFarenheit);
			fflush(stdin);
			break;
		case 4:
			printf("Saliendo....\n");
			break;
		default:
			//mensaje de error en entrada
			printf("\nIncorrecto, seleccione una opción valida\n");
			fflush(stdin);
			break;
		}

	}while(selec!=4);
	return 0;
}

int funFactorial(int x) {
	int nFac;
	int reFac=1;
	int i;
	printf("Ingrese el numero del cual quiere el factorial\n");
	scanf("%d",&nFac);
	if(nFac==0)
		printf("\nEl factorial es 1");
	else if(nFac<0)
			printf("\nEste programa no da el factorial de numeros negativos\n");
		else
		{
			for ( i = 1; i <= nFac; i++)
				reFac=reFac*i;
			printf("\nEl Valor del factorial de %d es: %d\n",nFac,reFac );
		}
	
	return 0;
}

//Se pone la cabecera para que el main sepa de las funciones que se vayan a implementar y no haya conflicto
void leer_matriz(int datoUno[N][N], int F, int C);
void imprimir_matriz(int datoUno[N][N],int F,int C);
void multiplicar(int datoUno[N][N],int datoDos[N][N],int resultadoM[N][N],int f1,int cf,int c2);
void suma_matriz(int datoUno[N][N],int datoDos[N][N],int matrizResultado[N][N],int F);
void transpuesta(int datoUnoT[G][G],int datoDosT[G][G],int espacio);
void leer_matrizTrans(int datoUno[G][G], int F, int C);
void imprimir_matrizTrans(int datoUno[G][G],int F,int C);
//se inicializa el main de matrices uno
int funSumaMatriz(int x) 
{
	//se definen las variables enteras y los arreglos
	int F,C, i,j;
	int matrizUno[N][N],matrizDos[N][N];
	int matrizResultado[N][N];
	//se pide al usuario que ingrese los datos de la matriz uno
	printf("Ingrese la dimension de la matriz MxM\n");
	scanf("%d",&F);
	printf("Primer matriz\n");
	leer_matriz(matrizUno,F,F);
	//Solicitamos los datos de la matriz dos
	printf("Segunda matriz\n");
	leer_matriz(matrizDos,F,F);
	//una vez tengamos las dos matrices se procede a hacer la suma de ambas
	suma_matriz(matrizUno,matrizDos,matrizResultado,F);
	printf("La matriz uno es:\n");
	imprimir_matriz(matrizUno,F,F);
	printf("La matriz dos es: \n");
	imprimir_matriz(matrizDos,F,F);
	printf("Matriz resultado\n");
	imprimir_matriz(matrizResultado,F,F);

	return 0;
}

//se declara el main
int funMultiMatriz(int x) 
{
	//se declaran las variables enteras y de topo matriz a utilizarse
	int F,C,L,P, i,j;
	int matrizUno[N][N],matrizDos[N][N];
	int matrizresultadoMsultado[N][N];
	int dato;
	//se solicita al usuario que tipo de operacion va a realizar
	printf("Ingrese 1 si desea una matriz NxM o ingrese 2 para una matriz NxN\n");
	scanf("%d",&dato);
	//se inicia el Switch-case
	switch(dato)
	{
	case 1:
		//En esta funcion vemos una multiplicacion de tipo (NxM)x(MxP)
		printf("Primer matriz\n");
	printf("Ingrese el numero de filas\n");
	scanf("%d",&F);
	printf("ingrese el numero de las columnas\n");
	scanf("%d",&C);
	leer_matriz(matrizUno,F,C);
	printf("Segunda matriz\n");
	printf("Para que la multiplicaciónse efectúe, las filas de la segunda matriz deben de ser igual a las columnas de la primera\n");
	printf("ingrese el numero de las columnas\n");
	scanf("%d",&P);
	leer_matriz(matrizDos,C,P);
	multiplicar(matrizUno,matrizDos,matrizresultadoMsultado,F,C,P);
	printf("La matriz uno es:\n");
	imprimir_matriz(matrizUno,F,C);
	printf("La matriz dos es: \n");
	imprimir_matriz(matrizDos,C,P);
	printf("Matriz resultado\n");
	imprimir_matriz(matrizresultadoMsultado,F,P);
		break;
	case 2:
		//En esta funcion vemos una multiplicación de tipo (NxM)x(NxM)
		printf("Primer matriz\n");
	printf("Ingrese el orden de las matrices\n");
	scanf("%d",&F);
	leer_matriz(matrizUno,F,F);
	printf("Segunda matriz\n");
	leer_matriz(matrizDos,F,F);
	multiplicar(matrizUno,matrizDos,matrizresultadoMsultado,F,F,F);
	printf("La matriz uno es:\n");
	imprimir_matriz(matrizUno,F,F);
	printf("La matriz dos es: \n");
	imprimir_matriz(matrizDos,F,F);
	printf("Matriz resultado\n");
	imprimir_matriz(matrizresultadoMsultado,F,F);
		break;
	default:
		printf("Dato no valido\n");
		break;
	}
	
	return 0;
}

int funTransMatriz(int x) {
	int datoUno[G][G],datoDos[G][G],i,j;
	printf("Este programa da el resultado de una matriz transpuesta de 3x3\n");
	printf("Por favor, ingrese la matriz:\n");
	leer_matrizTrans(datoUno,G,G);
	transpuesta(datoUno,datoDos,G);
	printf("Ga matriz original es:\n");
	imprimir_matrizTrans(datoUno,G,G);
	printf("Ga matriz transpuesta es:\n");
	imprimir_matrizTrans(datoDos,G,G);
	return 0;
}

//Funcion para obtener la transpuesta
void transpuesta(int datoUnoT[G][G],int datoDosT[G][G],int espacio)
{
	int i,j;
	for(i=0;i<G;i++)
		for (j = 0; j < G; j++)
			datoDosT[j][i]=datoUnoT[i][j];
}

//Hace la multiplicación de las matrices que el usuario ingresó implementando la función leer matriz
void multiplicar(int datoUno[N][N],int datoDos[N][N],int resultadoM[N][N],int f1,int cf,int c2)
{
	int i,j,k;
	//Limpiar matriz para que al momento de hacer la operación no tenga basura que pueda interferir
	for(i=0;i<f1;i++)
		for (j = 0; j < c2; j++)
			resultadoM[i][j]=0;

	//Se hace la multiplicación de la matriz
	for(i=0;i<f1;i++)
		for (j = 0; j<cf; j++)
			for (k = 0; k < c2; k++)
					resultadoM[i][k]= resultadoM[i][k]+datoUno[i][j]*datoDos[j][k];
}


//La funcion leer_matriz nos ayuda a que el usuario pueda ingresar los datos de la matriz 
void leer_matriz(int datoUno[N][N], int F, int C)
{
	int i,j;
	for(i=0;i<F;i++)
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%d][%d]\n",i,j );
			scanf("%d",&datoUno[i][j]);
		}
	}

//Nos permite imprimir cualquier matriz de la cual se ingresen los datos
void imprimir_matriz(int datoUno[N][N],int F,int C)
{
	int i,j;
	for(i=0;i<F;i++){
		for (j = 0; j < C; j++)
		{
			printf("%d\t",datoUno[i][j]);
		}
		printf("\n");}
}
//Hace la suma de las matrices que el usuario ingresó implementando la función leer matriz
void suma_matriz(int datoUno[N][N],int datoDos[N][N],int matrizResultado[N][N],int F)
{
	int i,j;
	for(i=0;i<F;i++)
		for (j = 0; j < F; j++)
			matrizResultado[i][j]=datoUno[i][j]+datoDos[i][j];
}

void leer_matrizTrans(int datoUnoT[G][G], int F, int C)
{
	int i,j;
	for(i=0;i<F;i++)
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%d][%d]\n",i,j );
			scanf("%d",&datoUnoT[i][j]);
		}
}
//Nos permite imprimir cualquier matriz de la cual se ingresen los datos
void imprimir_matrizTrans(int datoUnoT[G][G],int F,int C)
{
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%d\t",datoUnoT[i][j]);
		}
		printf("\n");
	}
}

/*Integrantes: Cortes Sanchez Edgar Noé; Daniel Iram González Portilla
*/
/* Cálculo del salario neto a partir de las horas laboradas,
el costo por hora y la tasa de IVA agregado del 16% sobre el
 salario y 12% de IVA retenido. Si el salario neto es menor
 a 10,000 mxn, agregar un bono del 5%*/
//se declaran las librerías
//Se inicia el main
int funSalario(int x) 
{
	//Se declaran las variables 
	int horas;
	float salario,salarioDia,salarioIva,salarioIva2,salarioMen,salarioExt;
	//Se le pide al usuario que ingrese los datos de su sueldo y sus horas laboradas
	printf("Ingrese su sueldo por hora:");
	scanf("%f",&salario);
	printf("\nIngrese sus horas laboradas al dia");
	scanf("%d",&horas);
	//se calcula el sueldo diario
	salarioDia=salario*horas;
	printf("\nSu salario diario es: %f",salarioDia);
	//se calcula el sueldo con el 16%
	salarioIva= salarioDia*1.16;
	printf("\nSu salario diario con 16 de IVA es: %f",salarioIva);
	//se calcula el sueldo sin el 12%
	salarioIva2=salarioIva*.88;
	printf("\nSu salario diario menos 12 de IVA es: %f",salarioIva2);
	//salario por 20 dias
	salarioMen=salarioIva2*20;
	printf("\nSu salario mensual es: %f", salarioMen);
	//si el salario es menor a 10000 se le suma el 5%
	if(salarioMen<10000)
	{
		salarioExt=salarioMen*1.05;
		printf("\nSe ganó un bono de 5 por ciento y su salario quedo en: %f",salarioExt);
	}else
		//si no, solo le indica que tiene un buen sueldo
		printf("\nTiene un buen sueldo");
	return 0;
}

