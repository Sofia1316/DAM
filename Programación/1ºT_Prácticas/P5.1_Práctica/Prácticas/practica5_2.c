#include <stdio.h>
#include <stdlib.h>

#define es_aprobado 5.0

int main(){
	//variable apartado 1
	int estudiantes;
	double notas_estudiantes[100];
	double nota_final;
	//variable apartado 2
	float promedio;
	//variables apartado 3
	int aprobado = 0;
	int suspenso = 0;
	//variables apartado 4
	float maxima = 0;
	float minima = 999;
	int estudiante_posición;

	//número de estudiantes
	printf("Introduce el número de estudiantes: "); 
	scanf("%d", &estudiantes);

	//array notas
	notas_estudiantes[100] = estudiantes - 1; //cambia el 100 por el número introducido y resta 1 porque empieza en 0 (se meten las notas)

	//Apartado 1; ingreso de notas
	for (int i = 0; i < estudiantes; i++){
		printf("Introduce la nota final de cada alumno: ");
		scanf("%lf", &nota_final);
		notas_estudiantes[i] = nota_final;
	}

	//Apartado 2; Cálculo promedio
	for (int i=0; i < estudiantes; i++){
		promedio += notas_estudiantes[i];
	}
	promedio = promedio / estudiantes;
	printf("Promedio de notas: %0.1f\n", promedio);
	
	//Apartado 3; Número de aprobados y suspensos
	//APROBADOS
	for(int i=0; i<estudiantes; i++){
		if (notas_estudiantes[i] >= es_aprobado){
			aprobado += 1; 
			//va sumando de 1 en 1 las notas que van pasando por él y ve que son aprobados, por ejemplo
			//si metes un 3, 7 y 9, cuando pasen por ahí, del 3 no sumará nada pero, el 7 suma 1, y el 9
			//suma otro 1, por lo que aprobado = 2
		}
	}
	printf("Número de estudiantes aprobados: %d\n", aprobado);

	//SUSPENSOS
	for(int i=0; i<estudiantes; i++){
		if (notas_estudiantes[i] < es_aprobado){
			suspenso = notas_estudiantes[i]; 
			//aquí solo llegarán las notas suspensas, ya que el condicional solo pasa los que son menores a 5
		}
	}
	printf("Número de estudiantes suspensos: %d\n", suspenso);
	
	//Apartado 4; Nota máxima y nota mínima
	//MÁXIMA
	for(int i=0; i < estudiantes; i++){
		if(notas_estudiantes[i] > maxima){
			maxima = notas_estudiantes[i];
			estudiante_posición = i + 1;
		}
	}
	printf("Nota máxima: %0.1f (Estudiante en la posición %d)\n", maxima, estudiante_posición);
	//MÍNIMA
	for (int i = 0; i < estudiantes; i++){
		if (notas_estudiantes[i] < minima){
			minima = notas_estudiantes[i];
			estudiante_posición = i + 1;
		}
	}
	printf("Nota mínima: %0.1f (Estudiante en la posición %d) \n", minima, estudiante_posición);

	//Apartado 5; notas por encima del promedio
	printf("Notas por encima del promedio\n");
	for(int i = 0; i < estudiantes; i++){
		if (notas_estudiantes[i] >= promedio){
			estudiante_posición = i + 1;
			printf("Estudiante en la posición %d: %0.1f\n", estudiante_posición, notas_estudiantes[i]);
	}
	}
	
return EXIT_SUCCESS;
} 
