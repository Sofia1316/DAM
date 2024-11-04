#include <stdio.h>
#include <stdlib.h>

/*
Eres parte del equipo de programación de una gran empresa que gestiona el inventario mundial de productos electrónicos. 
La empresa tiene almacenes en múltiples **continentes**, 
cada continente tiene varias **sedes** de almacenes, 
cada sede almacena **categorías** de productos (por ejemplo, televisores, teléfonos, ordenadores), 
cada categoría contiene **modelos** específicos,
cada modelo tiene diferentes **lotes**.

Tu tarea es modelar esta estructura con un array de cinco dimensiones que permita registrar la cantidad de unidades en cada lote de un modelo específico en la sede de un continente.

1. **Continente**: La empresa opera en 2 continentes (América y Europa).
2. **Sedes**: Cada continente tiene 3 sedes de almacenamiento.
3. **Categorías**: Cada sede almacena 4 categorías de productos (televisores, teléfonos, ordenadores y electrodomésticos).
4. **Modelos**: Cada categoría tiene 5 modelos específicos.
5. **Lotes**: Cada modelo tiene 10 lotes diferentes.

**Instrucciones**:

1. Define un array de cinco dimensiones `inventario` para almacenar la cantidad de unidades en cada lote del inventario.
    - `inventario[continente][sede][categoría][modelo][lote]`

2. Asigna algunos valores al array para simular cantidades de inventario, por ejemplo:
    - En América, en la primera sede, en la categoría de televisores, el modelo 0, en el lote 0, hay 50 unidades.
    - En Europa, en la segunda sede, en la categoría de teléfonos, el modelo 3, en el lote 2, hay 120 unidades.

3. Finalmente, muestra por pantalla la cantidad de unidades en al menos cinco posiciones distintas del array.

*/

int main(){
	int inventario[2][3][4][5][10]; //definimos el array


return EXIT_SUCCESS;
}
