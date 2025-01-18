#include <stdio.h>
#include <stdlib.h>

int main (){
int value = 0;     // value is now 0.
value = value + 5; // value is now 5.
value += 5;        // value is now 10.

int value = 0;     // value is now 0.
value = value + 1; // value is now 1.
value++;           // value is now 2.

/*
Los operadores como +=, -=, *=, ++ y -- se conocen como operadores de asignación compuesta porque realizan alguna operación además de asignar el resultado a la variable. El operador += se denomina específicamente operador de asignación de suma.
*/
//EJEMPLO 1:

int value = 1;

value = value + 1;
printf("First increment: " + value);

//Usamos value += 1; pero también vale un int (o una variable) para incrementar esa cantidad.
value += 1;
printf("Second increment: " + value);

value++;
printf("Third increment: " + value);

value = value - 1;
printf("First decrement: " + value);

value -= 1;
printf("Second decrement: " + value);

value--;
printf("Third decrement: " + value);

//EJEMPLO 2:

int value = 1;
value++;
printf("First: " + value);
printf($"Second: {value++}");
	//Se recupera el valor actual de la variable value y se usa en la operación de interpolación de cadenas.
	//Se incrementa el valor.
printf("Third: " + value);
printf("Fourth: " + (++value));
/* 
Resultado:
First: 2
Second: 2
Third: 3
Fourth: 4
*/
 return EXIT_SUCCESS;
}