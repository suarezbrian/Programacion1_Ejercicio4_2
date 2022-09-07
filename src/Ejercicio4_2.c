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

int suma(int numeroA, int numeroB, int* resultado);
int ingresarNumero();

int main()
{
	setbuf(stdout, NULL);
	int numeroA;
	int numeroB;
	int resultado;
	int validar;

	numeroA = ingresarNumero();
	numeroB = ingresarNumero();

	validar = suma(numeroA, numeroB, &resultado);

	if(validar == 1)
	{
		printf("\nLa suma de los numero %d + %d es : %d", numeroA, numeroB, resultado);
	}
	else
	{
		printf("No se pudo realizar la operacion.");
	}


	return 0;
}

int suma(int numeroA, int numeroB, int* resultado)
{
	int validar = 0;

	if(resultado != NULL)
	{
		*resultado = numeroA + numeroB;

		validar = 1;

		return validar;
	}

	return validar;
}

int ingresarNumero()
{
	int numero;

	printf("Ingrese un numero : ");
	scanf("%d", &numero);

	return numero;
}

