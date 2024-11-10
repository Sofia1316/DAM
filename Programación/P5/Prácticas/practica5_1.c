#include <stdio.h>
#include <stdlib.h>

int main(){
	//Creación de variables
	float temp_dia[7];
	double promedio;
	float maxima = 0;
	float minima = 999;
	int guardar_dia;
	int contador = 0;
	
	//Definir el array
	char días[7][10] = {"lunes", "martes", "miercoles", "jueves", "viernes", "sabado", "domingo"};
	
	//Apartado 1; Ingreso de datos
	for(int i = 0; i<7; i++){
		printf("Introduce el promedio del día %s: ", días[i]);
		scanf("%f", &temp_dia[i]);
	}

	//Apartado 2; Cálculo de la Temperatura Promedio Semanal
	for(int i = 0; i<7; i++){
		promedio += temp_dia[i];
	}
	promedio = promedio / 7;
	printf("Temperatura promedio de la semana: %0.1fºC\n", promedio);

	//Apartado 3; Detección de la Temperatura Máxima y Mínima
	//Temperatura mínima:
	for(int i = 0; i<7; i++){
		if(temp_dia[i] < minima){
			minima = temp_dia[i];
			guardar_dia = i;
		}
	}
	printf("Temperatura mínima es: %0.1f el día %s\n", minima, días[guardar_dia]);	

	//Temperatura máxima:
	for(int i = 0; i<7; i++){
		if(temp_dia[i] > maxima){
			maxima = temp_dia[i];
			guardar_dia = i;
		}
	}
	printf("Temperatura máxima es: %0.1f el día %s\n", maxima, días[guardar_dia]);	

	//Apartado 4; Contador de días superiores al promedio
	for(int i = 0; i < 7; i++){
		if(temp_dia[i] > promedio){
			contador += 1; //la variable contador almacenará los días superiores al promedio

			//podemos a su vez poner "guardar_dia -= 1" que haga la misma función, 
			//pero no sería del todo correcta ya que guardar_dia no es para contar, si no para almacenar el día
		}
	}	
	printf("Número de días superiores al promedio: %d\n", guardar_dia);

	//Apartado 5; Listado de días inferiores al promedio
	printf("Días con temperatura por debajo del promedio:\n");

	for(int i = 0; i < 7; i++){
		if(temp_dia[i] < promedio){
			// función para las mayúsculas
			char letra_mayuscula = días[i][0] - 'a' + 'A'; //convierte la mayuscula a minuscula
			días[i][0] = letra_mayuscula; //asigna la letra convertida al día
			// imprime:	
			printf("%s: %0.1fºC\n", días[i], temp_dia[i]);
		}
	}

return EXIT_SUCCESS;
}
