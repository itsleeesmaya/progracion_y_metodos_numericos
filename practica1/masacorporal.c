#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <wchar.h>
#include <locale.h>
char nombre[30];
	float imc;
	double peso, edad, estatura;
int main(void)
{
	setlocale (LC_ALL, "");
	printf("¿Cuál es tu nombre?\n");
	scanf("%s", nombre);
	printf("¿Cuál es tu edad?\n");
	scanf("%lf", &edad);
	printf("Ingresa tu peso (kg)\n");
	scanf("%lf", &peso);
	printf("Ingresa tu estatura (mts)\n");
	scanf("%lf", &estatura);
	imc=peso/pow(estatura,2);
	system("cls");
	printf("Calculando IMC...\n");
	sleep(5);
	system("cls");
	printf("Hola %s \nTienes %.0lf años \nTu estatura es de %.2lf metros\nTu peso es de %.2lf kilogramos\nTu indice de masa corporal es de %f", nombre, edad, estatura, peso, imc);
}
