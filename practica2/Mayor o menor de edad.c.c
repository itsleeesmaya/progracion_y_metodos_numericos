#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int edad;
int main(void)
{
	setlocale(LC_ALL, "");
	printf("�Cu�l es tu edad?\n");
    scanf("%d", &edad);
	if (edad>=18) 
	{
	    printf("Eres mayor de edad");
	}
  else
  {
        printf("Eres menor de edad");
  }
  return 0;
}



