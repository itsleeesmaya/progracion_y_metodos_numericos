#include <stdio.h>
#include <math.h>
#include <wchar.h>
#include <locale.h>
int num;
int main(void){
	setlocale(LC_ALL, "");
	printf("ingresa un n�mero entero\n");
	scanf("%d", &num);
	if(num % 2 == 0)
	{
		printf("Es n�mero par");
	}
	else 
	{
		printf("Es n�mero impar");
	}
	return 0;
}







