#include <stdio.h>
#include <stdlib.h>

nt main(){

    int guardar_dia;
    int contador = 0;
    int maxima_index = 0;
    int minima_index = 0;
    float promedio = 0;
    float promedio_sin_atipicos = 0;
    float temp_dia[7] = {23, 12.5, 201, 24, 15, 20, -25.2};
    int total_validos = 0;

    char dias[7][10] = {"lunes", "martes", "miercoles", "jueves", "viernes", "sábado", "domingo"};

    	// Inicializar es_valida a true para considerar todas las temperaturas como válidas inicialmente
    	for (int i = 0; i < 7; i++) {
        	if (temp_dia[i] >= -10 && temp_dia[i] <= 45) {
            		es_valida[i] = true;
            		promedio_sin_atipicos += temp_dia[i];
            		total_validos++;
        	} else {
            	es_valida[i] = false;
        	}
        promedio += temp_dia[i];
    	}

    	// Cálculo del promedio total
    	promedio = promedio / 7;
    	printf("Temperatura promedio de la semana: %0.1fºC\n", promedio);

   	// Temperatura máxima
    	for(int i = 0; i < 7; i++){ 
		if (temp_dia[i] > maxima){
			maxima = temp_dia[i];
			guardar_dia = i;
		} else {
		}
	}
	printf("Temperatura máxima: %dºC del día %s.\n",maxima, dias[guardar_dia]);

	//MÍNIMA	
	for (int i = 0; i < 7; i++){
		if (temp_dia[i] < minima){
			minima = temp_dia[i];
			guardar_dia = i;
		} else {
		}
	}
	printf("Temperatura mínima: %dºC del día %s.\n",minima, dias[guardar_dia]);
	
	// Cálculo del promedio sin los datos atípicos
    	if (total_validos > 0) {
        	promedio_sin_atipicos = promedio_sin_atipicos / total_validos;
        	printf("Temperatura promedio de la semana sin datos atípicos: %0.1fºC\n", promedio_sin_atipicos);
    	} else {
        	printf("No hay datos válidos para calcular el promedio sin atípicos.\n");
    	}


    	// Contador de días con temperatura superior a la media semanal sin datos atípicos
    	for (int i = 0; i < 7; i++) {
        	if (es_valida[i] && temp_dia[i] > promedio_sin_atipicos) {
            	contador++;
        	}
    	}
    	printf("Número de días con temperaturas superiores al promedio sin atípicos: %d\n", contador);

    	// Días con la temperatura por debajo de la media (listado)
    	printf("Días con temperatura por debajo del promedio sin atípicos: \n");
    	for (int i = 0; i < 7; i++) {
        	if (es_valida[i] && temp_dia[i] < promedio_sin_atipicos) {
            	char letra_mayuscula = dias[i][0] - 'a' + 'A';
            	dias[i][0] = letra_mayuscula;
            	printf("%s: %0.1fºC \n", dias[i], temp_dia[i]);
        	}
    	}

    return 0;
}

