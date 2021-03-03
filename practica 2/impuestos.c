#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int opc;
float salario, interes;
int main(void)
{
	setlocale(LC_ALL, "");
	printf("¿Cuál es su estado civil?\n");
	printf("1- Soltero\n");
	printf("2- Casado\n");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1:
			printf("¿Cuál es su salario\n");
			scanf("%f",&salario);
			if(salario>32000)
			{
				printf("Se le cobrará un interes del 25%%\n");
				interes=salario*.25;
				printf("Sus intereses a pagar son %.2f pesos", interes);
			}
			else
			{
				printf("Se le cobrará un interes del 10%%\n");
				interes=salario*.10;
				printf("Sus intereses a pagar son %.2f pesos", interes);
			}
			break;
		case 2:
			printf("¿Cuál es su salario\n");
			scanf("%f",&salario);
			if(salario>64000)
			{
				printf("Se le cobrará un interes del 25%%\n");
				interes=salario*.25;
				printf("Sus intereses a pagar son %.2f pesos", interes);
			}
			else
			{
				printf("Se le cobrará un interes del 10%%\n");
				interes=salario*.10;
				printf("Sus intereses a pagar son %.2f pesos", interes);
			}
		    break;	
	}
	return 0;
}

