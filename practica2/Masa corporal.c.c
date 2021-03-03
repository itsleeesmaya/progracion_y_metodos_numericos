#include <stdio.h>
#include <wchar.h>
#include <math.h>
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
	imc=peso/(pow(estatura,2));
	printf("Tu indice de masa corporal es %.2f\n", imc);
	if (imc<18.5){
	    printf("%s tienes peso bajo\n",nombre);
    }
    else if (imc>=18.5 && imc<=24.9){
        printf("%s tienes un peso normal\n",nombre);
    }
    else if (imc>=25 && imc<=29.9){
        printf("%s tienes sobrepeso\n", nombre);
    }
    else if (imc>=30 && imc<=34.5){
        printf("%s tienes obesidad tipo 1\n", nombre);
    }
   else if (imc>=35 && imc<=39.9){
        printf("%s tienes obesidad tipo 2\n", nombre);
   }
   else if (imc>=40){
        printf("%s tienes hiper obesidad\n", nombre);
   }
return 0;
}
