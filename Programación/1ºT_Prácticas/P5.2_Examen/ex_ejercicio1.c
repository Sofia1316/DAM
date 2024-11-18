#include <stdio.h>
#include <stdlib.h>

int main(){
	//Definimos el array de 5 dimensiones
	int inventario[2][3][4][5][10] = {0};
	int nueva_cantidad;
	int incremento = 200;
	int nuevo = 3000;

	//Valores aleatorios
	inventario[0][0][0][0][0] = 50;		//América, sede 1, televisores, modelo 0, lote 0 --> 50 unidades
	inventario[1][1][1][3][2] = 120;	//Europa, sede 2, teléfonos, modelo 3, lote 2 --> 120 unidades
	inventario[0][2][2][1][8] = 70;		//América, sede 3, ordenadores, modelo 2, lote 9 --> 70 unidades
	inventario[0][0][0][3][5] = 25;		//América, sede 1, televisores, modelo 4, lote 6 --> 25 unidades
	inventario[1][1][3][4][2] = 12;		//Europa, sede 2, electrodomésticos, modelo 5, lote 3 --> 12 unidades
	inventario[1][1][0][0][9] = 200;	//Europa, sede 2, televisores, modelo 1, lote 10 --> 200 unidades 

	//Definir lo que se va a imprimir
	printf("Las unidades de América, sede 1, televisores, modelo 0, lote 0 son: %d\n", inventario[0][0][0][0][0]);
	printf("Las unidades de Europa, sede 2, teléfonos, modelo 3, lote 2 son: %d\n", inventario[1][1][1][3][2]);
	printf("Las unidades de América, sede 3, ordenadores, modelo 2, lote 9 son: %d\n", inventario[0][2][2][1][8]);
	printf("Las unidades de América, sede 1, televisores, modelo 4, lote 6 son: %d\n", inventario[0][0][0][3][5]);
	printf("Las unidades de Europa, sede 2, electrodomésticos,  modelo 5, lote 3 son: %d\n", inventario[1][1][3][4][2]);
	printf("Las unidades de Europa, sede 2, televisores, modelo 2, lote 10 son: %d\n",  inventario[1][1][0][0][9]);
	
	//Incremento de las 200 unidades nuevas introducidas
	printf("Introduce una nueva cantidad para incrementar las 200 unidades:");
	scanf(" %d", &nueva_cantidad);
	if (nueva_cantidad > 1){
		incremento += nueva_cantidad;
	} else {}
	printf("Valor incrementado %d\n", incremento);

return EXIT_SUCCESS;
}
