
#include <stdio.h>
#include <math.h>
#include <locale.h>
int opc, bolsas;
float precio, descuento, precio_bolsas, precio_final;
int main(void)
{
	setlocale (LC_ALL, "");
    printf("¿En cuál departamento comprarás?\n");
    printf("1-Perfumería\n");
    printf("2-Salchichonería\n");
    printf("3-Carnicería\n");
    printf("4-Limpieza\n");
    scanf("%d",&opc);
    printf("¿Cuál es el monto a pagar?\n");
    scanf("%f",&precio);
    printf("¿Cuál es el numero de bolsas que ocupas?\n");
    scanf("%d",&bolsas);
    precio_bolsas=bolsas*(0.1);
    switch (opc){
      case 1:
      descuento=(precio*.20);
      precio_final=precio-descuento+precio_bolsas;
      printf("Su descuento es de  %.0f pesos\n",descuento);
      printf("Su precio total es de %.2f pesos\n",precio_final);
      break;
      case 2:
      descuento=(precio*.40);
      precio_final=precio-descuento+precio_bolsas;
      printf("Su descuento es de  %.0f pesos\n",descuento);
      printf("Su precio total es de %.2f pesos\n",precio_final);
      break;
      case 3:
      descuento=(precio*.20);
      precio_final=precio-descuento+precio_bolsas;
      printf("Su descuento es de  %.0f pesos\n",descuento);
      printf("Su precio total es de %.2f pesos\n",precio_final);
      break;
      case 4:
      descuento=(precio*.35);
      precio_final=precio-descuento+precio_bolsas;
      printf("Su descuento es de  %.0f pesos\n",descuento);
      printf("Su precio total es de %.2f pesos\n",precio_final);
      break;
    }
return 0;
}
