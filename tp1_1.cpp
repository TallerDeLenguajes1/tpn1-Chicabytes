#include <stdio.h>
#include <stdlib.h>

int main (void){
    int a = 10;
    int *pa;
    pa = &a;
    //a) El contenido del puntero
    printf("Contenido del puntero: %d\n", *pa);
    //b) La dirección de memoria almacenada por el puntero. 
    printf("Direccion almacenada en el puntero: %p\n", pa);
    //c) la dirección de memoria de la variable
    printf("Direccion de la variable: %p\n", &a);
    //d) la dirección de de memoria del puntero.
    printf("Direccion del puntero: %p\n", &pa);
    //e) el tamaño de memoria utilizado con sizeof
    printf("Tamaño de memoria de la variable: %d Bytes", sizeof(a));
    getchar();
    return 0;
}
