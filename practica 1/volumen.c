#include <stdio.h>
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
	printf("El volumen de la esfera es de %f metros cúbicos", vol(radio));
	return 0;
}
