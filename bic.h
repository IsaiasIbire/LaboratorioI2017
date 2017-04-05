#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* /brief    VALIDA NROS / LETRAS
* /param    CADENA A VALIDAR
* /param    TIPO DE VALIDACION (1 -> NRO. / 2 -> Letra)
* /return   !=0 SI ES EL DATO CORRESPONDIENTE
*/
int validaString(char chain[],int acc);
/**
* /brief    MUESTRA MENU
* /param    MSJ PRINTF
* /param    MINIMO PERMITIDO
* /param    MAXIMO PERMITIDO
* /param    MSJ OCURRE UN ERROR
* /param    CANT ERRORES PERMITIDOS
* /return   DEVUELVE LA SELECCIÓN
* IMPORTANTE: SI SE CUMPLE LA CANTIDAD MAXIMA DE ERRORES PERMITIDOS Y NO QUIERE CONTINUAR RETORNA -1
*/
int menu(char screenPrint[],int min,int max,char screenPrintError[],int cantError);
/**
* /brief realiza una suma de 2 valores ingresados por usuario
* /param son los valores para realizar la operacion con los numeros que ingreso el usuario
* /return devuelve el resultado de la suma
*/
float sumar(float,float);
/**
* /brief realiza una resta de 2 valores ingresados por usuario
* /param son los valores para realizar la operacion con los numeros que ingreso el usuario
* /return devuelve el resultado de la resta
*/
float restar(float,float);
/**
* /brief realiza una divicion de 2 valores ingresados por usuario
* /param son los valores para realizar la operacion con los numeros que ingreso el usuario
* /return devuelve el resultado de la divicion
*/
float divicion(float,float);
/**
* /brief realiza una multiplicacion de 2 valores ingresados por usuario
* /param son los valores para realizar la operacion con los numeros que ingreso el usuario
* /return devuelve el resultado de la multiplicacion
*/
float multiplicacion(float,float);
/**
* /brief calcula el factorial de un numero ingresado por el usuario
* /param numero ingresado por usuario
* /return devuelve el factorial del numero
*/
int factorial(float);
/**
* /Limpia pantalla
*/
void limpiarPantalla(void);
