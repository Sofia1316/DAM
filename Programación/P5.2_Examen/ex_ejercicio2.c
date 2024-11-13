#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	//Listas de palabras aleatorias
	char palabra[6][8] = {"manzana","limón","uva","melón","lima", "kiwi"}; //6 es el nº de palabras y 8 la extensión

	char palabras[30][20] = {
		"casa", "árbol", "perro", "gato", "auto", "bicicleta"
		"sol", "luna", "estrella", "montaña", "río", "mar",
		"tierra", "agua", "aire", "metal", "bosque", "flor", 
		"lluvia", "trueno", "viento", "tormenta", "nieve",
		"campo", "ciudad", "puente", "edificio", "escalera", 
		"pintura", "escultura"};

	//Recorrido por la palabra de la letra a 
	for(int i = 0; i < 6; i++){	
		int PalabraConA = 0;	
		for (int a = 0; a < strlen(palabra[i]); a++){ //para que mire las palabras caracter a caracter	
			if(palabra[i][a] == 'a'){
				PalabraConA = 2;
				break;
			} 
		}
		//con este condicional evitamos que se impriman las palabras con 'a'
		if(PalabraConA == 2){
			continue;
		}
		printf("%s\n", palabra[i]);
	}
	
	//Recorrido por la palabra de la letra e 
	for(int i = 0; i < 30; i++){ //se pone un menor que 30 ya que hay 30 palabras en la lista	
		int PalabraConE = 0;	
		for (int e = 0; e < strlen(palabras[i]); e++){ //para que mire las palabras caracter a caracter	
			if(palabras[i][e] == 'e'){
				PalabraConE = 2;
				break;
			} 
		//con este condicional evitamos que se impriman las palabras con 'e'
		if(PalabraConE == 2){
			int contador = 0;
			contador += 1; // el contador irá sumando 1 a cada palabra que detecte que lleve una 'e'
			continue;
		}
	}
		printf("%s\n", palabras[i]);
	}

/*	//Listado de palabras que contienen la letra 'g'
	printf("Listado de palabras con la letra G: \n");
	for(int i = 0; i < 30; i++){	
		int PalabraConG = 0;	
		for (int g = 0; g < strlen(palabras[i]); g++){	
			if(palabras[i][g] == 'g'){
				PalabraConG = 2;
				break;
			} 
		}
		//con este condicional evitamos que se impriman las palabras con 'g'
		if(PalabraConG == 2){
			continue;
		}
		printf("%s\n", palabras[i]);
	}
	
	//Listado de palabras que contienen la letra 'g' y la letra 'e'
	printf("Listado de palabras con la letra g y la letra e: \n");
	for(int i = 0; i < 30; i++){	
		int PalabraConG = 0;
		int PalabraConE = 0;	
		for (int g = 0; g < strlen(palabras[i]); g++){	
			int g = 0;
			int e = 0;
			if(palabras[i][g] == 'g' && palabras[i][e] == 'e'){
				PalabraConG = 2;
				PalabraConE = 2;
				break;
			} 
		}
		//con este condicional evitamos que se impriman las palabras con 'g'
		if(PalabraConG == 2 && PalabraConE == 2){
			continue;
		}
		printf("%s\n", palabras[i]);
	}
*/	

	return EXIT_SUCCESS;
}
