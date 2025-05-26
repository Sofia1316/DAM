package SLS_Examen_POO;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	static Scanner entrada = new Scanner(System.in);
	static Coche coche = null;
	static ArrayList<Vehículo> vehículos = new ArrayList<>();
	static ArrayList<Coche> coches = new ArrayList<>();
	static ArrayList<Avión> aviones = new ArrayList<>();
	
	public static void main(String[] args) {
		Coche coche1 = new Coche("ford", "blanco", "5", 100, true, false);
		Coche coche2 = new Coche("opel", "negro", "3", 500, true, true);
		Barco barco1 = new Barco("barquito", "negro", "7", 6000, 1, 2, Tipo.Vela);
		Barco barco2 = new Barco("barcazo", "gris", "9", 700, 3, 4, Tipo.Pesca);
		Avión avion1 = new Avión("iberia", "blanco", "3", 60, 50, 90, true);
		Avión avion2 = new Avión("iberia2", "blanco2", "2", 30, 10, 300, true);
		aviones.add(avion1);
		aviones.add(avion2);
		
		int respuesta;
		boolean salida = true;
		
		do {
		System.out.println("Menu;");
		System.out.println("1. dar alta objetos");
		System.out.println("2. listar todo el contenido");
		System.out.println("3. calcular total");
		System.out.println("4. calcular eléctricos");
		System.out.println("5. calcular combate");
		System.out.println("6. calcular media de km");
		System.out.println("7. salir");
		System.out.println("8. cambiar dato");
		System.out.println("Opción: ");
		
		if(entrada.hasNextInt()) {
			respuesta = entrada.nextInt();
			
			switch(respuesta) {
			case 1:
				entrada.nextLine();
				System.out.println("Vas a agregar coches:");
				System.out.println("Introduce la marca");
				String marca = entrada.nextLine();
				System.out.println("Color");
				String color = entrada.nextLine();
				System.out.println("bastidores");
				String bast = entrada.nextLine();
				System.out.println("km");
				int km = entrada.nextInt();
				entrada.nextLine();
				System.out.println("electrico  (si/no)");
				String electrico = entrada.nextLine();
				
				boolean el;
				if(electrico.equals("si")) {
					el = true;
				} else {
					el = false;
				}
				
				System.out.println("antiguo (si/no)");
				String ant = entrada.nextLine();
				
				boolean a;
				if(ant.equals("si")) {
					a = true;
				} else {
					a = false;
				}
				
				Coche c1 = new Coche(marca, color, bast, km, el, a);
				vehículos.add(c1);
				coches.add(c1);
				System.out.println(c1);
				
				System.out.println("Vas a agregar coches:");
				System.out.println("Introduce la marca");
				String marca2 = entrada.nextLine();
				System.out.println("Color");
				String color2 = entrada.nextLine();
				System.out.println("bastidores");
				String bast2 = entrada.nextLine();
				System.out.println("km");
				int km2 = entrada.nextInt();
				entrada.nextLine();
				System.out.println("electrico (si/no)");
				String electrico2 = entrada.nextLine();
				
				boolean el2;
				if(electrico.equals("si")) {
					el2 = true;
				} else {
					el2 = false;
				}
				
				System.out.println("antiguo  (si/no)");
				String ant2 = entrada.nextLine();
				
				boolean a2;
				if(ant2.equals("si")) {
					a2 = true;
				} else {
					a2 = false;
				}
				
				Coche c2 = new Coche(marca2, color2, bast2, km2, el2, a2);
				vehículos.add(c2);
				coches.add(c2);
				System.out.println(c2);
				break;
			case 2:
				entrada.nextLine();
				System.out.println("Listado:");
				System.out.println(coche1);
				System.out.println(coche2);
				System.out.println(barco1);
				System.out.println(barco2);
				System.out.println(avion1);
				System.out.println(avion2);

				break;
			case 3:
				entrada.nextLine();
				int contador = 6; // porque definimos en un inicio que hay 6 vehículos
				for(Vehículo v : vehículos) {
					contador++;
				}
				System.out.println("El total de vehículos es de: " + contador);
				
				break;
			case 4:
				entrada.nextLine();
				int contadorEl = 2; // porque ya he definido 2
				for(Coche c : coches) {
					if(c.electrico == true) {
						contadorEl++;
					}
				}
				System.out.println("El número de eléctricos es: " + contadorEl);
				
				break;
			case 5:
				entrada.nextLine();
				int contadorComb = 0; 
				for(Avión t : aviones) {
					if(t.isCombate() == true) {
						contadorComb++;
					}
				}
				System.out.println("El número de combate es: " + contadorComb);
				break;
			case 6:
				entrada.nextLine();
				int media = 0;
				for(Vehículo v : vehículos) {
					media = v.kilometros / 2;
				}
				System.out.println("La media de los km es de: " + media);
				break;
			default:
				System.out.println("saliendo del programa");
				salida = false;
				break;
			}
		} else {
			System.out.println("respuesta no válida");
			salida = false;
		}
		
		} while (salida == true);
		entrada.close();
		

	}

}
