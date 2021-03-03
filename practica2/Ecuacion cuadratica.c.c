#include <stdio.h>
#include <math.h>
#include <wchar.h>
#include <locale.h>
float a, b, c, x1, x2, x, d;
int main(void)
{
    setlocale(LC_ALL,"");
    printf("Ingresa el valor de a\n");
    scanf("%f",&a);
    printf("Ingresa el valor de b\n");
    scanf("%f",&b);
    printf("Ingresa el valor de c\n");
    scanf("%f",&c);
    d=pow(b,2)-(4*a*c);
    if(d<0)
    {
    	printf("Error, no podemos calcular raices negativas");
	}
	else
	{
		x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("Las raices son:\nx1= %.2f\nx2= %.2f\n", x1, x2);
	}
 return 0;   
}




