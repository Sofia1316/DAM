#include <stdio.h>
#include <stdlib.h>

int main(){
	//Creación de variables
	float temp_dia[7];
	double promedio;
	float maxima = 0;
	float minima = 999;
	int guardar_dia;
	
	//Definir el array
	char días[7][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
	
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

	
	

return EXIT_SUCCESS;
}
