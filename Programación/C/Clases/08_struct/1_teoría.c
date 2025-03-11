#include <stdio.h>
#include <stdlib.h>

/**
 * *
 * *	Autor: Sofía López
 * */

struct fecha {
	int mes;
	int dia;
	int anio;
};

struct cuenta {
	int num_cuenta;
	char tipo_cuenta;
	char nombre[80];
	float saldo;
	//struct fecha ultimopago;
	int mes_ultimo_pago;
	int día_ultimo_pago;
	int anio_ultimo_pago;
};

int main(){

	struct cuenta cliente[100];
	//Declarando un supuesto hueco para 100 cuentas
	
	//Esta forma de inicializar solo es válida en la declaración:
	struct cuenta_usuario[0] = {12345, 'R', "José",586.30,5,24,1990};
				//num_cuenta, tipo_cuenta, nombre, saldo, fecha
	
	printf("Num cuenta: %d\n", usuario.num_cuenta);
	printf("Tipo cuenta: %c\n", usuario.tipo_cuenta);


	//Array de clientes
	cliente[0].num_cuenta = 12345;
	cliente[0].tipo_cuenta = 'R';
	//strcpy(cliente[0].nombre, "José");  ---> Usar strcpy para copiar cadenas en C
	cliente[0].saldo = 586.30;
	cliente[0].ultimopago.mes = 5;
	cliente[0].ultimopago.dia = 24;
	cliente[0].ultimopago.anio = 1990;
			
	//Rellenamos el cliente 1 por pantalla:
	printf("Introduce el número de cuenta:");
	scanf("%d", &cliente[1].num_cuenta);
	printf("El número de cuenta es: %d\n", cliente[1].num_cuenta);

	printf("%d",cliente[0].tipo_cuenta);
					    
	return EXIT_SUCCESS;
}
