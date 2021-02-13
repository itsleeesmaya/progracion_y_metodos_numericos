#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <wchar.h>
#include <locale.h>
#define pi 3.1415926
#define vol(radio) ((4+0.0)/3)*pi*pow(radio,3)
float radio;
int main(void)
{
	setlocale (LC_ALL, "");
	printf("¿Cuál es la medida del radio?\n");
	scanf("%f", &radio);
	system("cls");
	printf("Calculando volumen...");
	sleep(4);
	system("cls");
	printf("El volumen de la esfera es de %f metros cúbicos", vol(radio));
	return 0;
}
