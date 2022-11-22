/*Integrantes: Cortes Sanchez Edgar Noé; Daniel Iram González Portilla
*/
/* Cálculo del salario neto a partir de las horas laboradas,
el costo por hora y la tasa de IVA agregado del 16% sobre el
 salario y 12% de IVA retenido. Si el salario neto es menor
 a 10,000 mxn, agregar un bono del 5%*/
//se declaran las librerías
#include <stdlib.h>
#include <stdio.h>

//Se inicia el main
int main(int argc, char** argv) 
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
		printf("\nTiene un buen sueldo");
	return 0;
}