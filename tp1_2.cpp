#include <stdio.h>
#include <stdlib.h>
//punto a
int cuadrado(int X);
//punto b
void cuadra2(int Y);
//punto c
void invertir(int *a, int *b);
//punto d
void orden(int *a, int *b);

int main (void){
    int num1 = 0, a, b;
    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("La dirección de la variable es: %p\n", &num1);
    printf("El contenido de la variable es: %d", num1);
    cuadra2(num1);
    num1 = cuadrado(num1);
    printf("El cuadrado del numero es: %d\n", num1);
    printf("Ingrese un numero a: ");
    scanf("%d", &a);
    printf("Ingrese un numero b: ");
    scanf("%d", &b);
    invertir(&a, &b);
    printf("Los numeros invertidos a:%d y b:%d\n", a, b);
    orden(&a, &b);
    return 0;
}
//punto a
int cuadrado(int X){
    return X * X;
}
//punto b
void cuadra2(int Y){
    printf("El cuadrado del numero es: %d\n", Y*Y);
}
//punto c
void invertir(int *a, int *b){
    int aux; 
    aux = *a;
    *a = *b;
    *b = aux;
}
//punto d
void orden(int *a, int *b){
    if(*a < *b){
        invertir(a, b);
        printf("Se cambio el orden siendo b: %d el menor y a: %d el mayor", *b,*a);
    }
    else{
        printf("No se modificico el orden: b: %d es el menor y a: %d es el mayor", *b, *a);
    }
}