#include <stdio.h>
#include <math.h>
#include <wchar.h>
#include <locale.h>
int num;
int main(void){
	setlocale(LC_ALL, "");
	printf("ingresa un número entero\n");
	scanf("%d", &num);
	if(num % 2 == 0)
	{
		printf("Es número par");
	}
	else 
	{
		printf("Es número impar");
	}
	return 0;
}







