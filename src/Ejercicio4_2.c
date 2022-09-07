/*
 ============================================================================
 Name        : Ejercicio4_2.c
 Author      : Brian Alan Suarez
 Version     : Ejercicio4_2 - Tema 4
 Description :

Ejercicio 4-2:
Realizar una función Suma que reciba como parámetros dos enteros (los que
va a sumar) y un puntero a entero que guardara el resultado de esta. La función retorna 1 si
pudo realizar la suma y cero en caso de no haberla podido realizar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void suma(int numeroA, int numeroB, int* resultado);
int ingresarNumero();

int main()
{
	setbuf(stdout, NULL);
	int numeroA;
	int numeroB;
	int resultado;

	numeroA = ingresarNumero();
	numeroB = ingresarNumero();

	suma(numeroA, numeroB, &resultado);

	printf("\nLa suma de los numero %d + %d es : %d", numeroA, numeroB, resultado);

	return 0;
}

void suma(int numeroA, int numeroB, int* resultado)
{
	*resultado = numeroA + numeroB;
}

int ingresarNumero()
{
	int numero;

	printf("Ingrese un numero : ");
	scanf("%d", &numero);

	return numero;
}

