#include <stdio.h>
#include <stdlib.h>
/* Realizar un programa que me permita desarrollar un vector de N posiciones y que solo deje introducir número pares e indique su posición en el vector.*/

int main() {

int n, i, x, num = 0;
int vec[x];

printf("Dijita el numero de posiciones del vector : ");
scanf("%d" , &n);
printf("\n");
 
    for (i = 0; i < n; i++) {
        printf("Escribe el numero que deses,(el numero debe ser entero) :  %d ", i + 1);
        printf("| ");
        scanf("%d", &num);
       
printf("\n");
   
    while (num % 2 != 0) {
    printf("El numero  que escribio no es par, intenta con otro numero: ");
    scanf("%d" , &num);
}

vec[i] = num;
printf("Numero aceptado, tu numero es par, siguiente numero %d:  %d\n" , i + 1, vec[1]);
}
       printf("\n");
printf("Resumen de vector dijitado : \n");
    for (i = 0; i < n; i++) {
        printf("posicion %d: %d\n" , i + 1, vec[i]);
    }
    printf("\n");
    int opcion;

    do {
        printf("Menu de opciones:\n");
        printf("\n");
        printf("1. Deseas repetir el programa?\n");
        printf("\n");
        printf("2. Cerrar programa\n");
        printf("\n");
        printf("  Ingresa una opcion:  ");
        scanf("%d", &opcion);
        printf("\n");

        switch (opcion) {
            case 1:
                printf("volviendo al incio...\n");
                break;
            case 2:
                printf("programa apagado. Gracias por usarlo...\n");
                break;
            default:
                printf("Opción no válida. Por favor, intente de nuevo.\n");
        }
    } while (opcion != 2);
   
return 0;
}
