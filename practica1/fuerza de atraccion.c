#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <wchar.h>
#include <locale.h>
#define g 9.8
float m, p;
int main(void)
{
	setlocale (LC_ALL, "");
    printf("�Cu�l es su masa corporal?\n");
    scanf("%f",&m);
    p=m*g;
    system("cls");
    printf("Calculando la fuerza de atracci�n...");
    sleep(4);
    system("cls");
    printf("La fuerza de atraccion es %f", p);
    return 0;
}
