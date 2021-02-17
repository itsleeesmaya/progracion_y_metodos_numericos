#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#define g 9.8
float m, p;
int main(void)
{
	setlocale (LC_ALL, "");
    printf("¿Cuál es su masa corporal?\n");
    scanf("%f",&m);
    p=m*g;
    printf("La fuerza de atraccion es %f", p);
    return 0;
}
