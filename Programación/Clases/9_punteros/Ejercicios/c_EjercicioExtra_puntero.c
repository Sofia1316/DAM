#include <stdio.h>
#include <stdlib.h>
 
/*
**Objetivo:** Practicar el uso de punteros genéricos `void *` y el casting a tipos específicos para comparar valores de diferentes tipos.

**Descripción:**

Escribe una función genérica `int comparar(const void *a, const void *b, char tipo)` que compare dos valores apuntados por `a` y `b` 
en función del parámetro `tipo`, y retorne:

- `1` si `a` es menor que `b`
- `0` si `a` es igual a `b`
- `1` si `a` es mayor que `b`

El parámetro `tipo` indica el tipo de datos de los valores:

- Si `tipo` es `'i'`, los valores son de tipo `int`
- Si `tipo` es `'f'`, los valores son de tipo `float`
- Si `tipo` es `'d'`, los valores son de tipo `double`
- Si `tipo` es `'c'`, los valores son de tipo `char`

En tu función `main`, demuestra el uso de `comparar` comparando diferentes pares de valores de varios tipos.

**Puntos clave:**

- Uso de punteros genéricos `void *`.
- Casting de `void *` a punteros de tipos específicos antes de dereferenciar.
- Implementación de una función genérica que puede manejar múltiples tipos de datos.
- Manejo adecuado de comparaciones, teniendo en cuenta las peculiaridades de cada tipo (por ejemplo, precisión en flotantes).

*/
int comparar(const void *a, const void *b, char tipo);
switch(tipo){
	case


}

int main(){
	int a = 5, b = 10;
	float x = 3.14, y = 2.71;
	double m = 1.234567, n = 1.234568;
	char c1 = 'r', c2 = 'h';

	printf("Comparación de enteros: %d\n", comparar(&a, &b, 'a'));   // Debería imprimir -1
	printf("Comparación de floats: %d\n", comparar(&x, &y, 'b'));    // Debería imprimir 1
	printf("Comparación de doubles: %d\n", comparar(&m, &n, 'c'));   // Debería imprimir -1
	printf("Comparación de chars: %d\n", comparar(&c1, &c2, 'd'));   // Debería imprimir -1


return EXIT_SUCCESS;
}
