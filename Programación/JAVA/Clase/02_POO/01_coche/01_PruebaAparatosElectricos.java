package POO;

public class PruebaAparatos {

	public static void main(String[] args) {
		// Inicializo los aparatos como apagados
		AparatosElect bombilla = new AparatosElect(100, false);
		AparatosElect radiador = new AparatosElect(2000, false);
		AparatosElect plancha =  new AparatosElect(1200, false);
		
		// Imprimimos inicialmente con un consumo de 0 porque están apagados
		System.out.println("Estado inicial:");
		System.out.println("Bombilla: " + bombilla.toString());
		System.out.println("Radiador: " + radiador.toString());
		System.out.println("Plancha: " + plancha.toString());
		System.out.println("El consumo total es de " + AparatosElect.getConsumoTotal());

		// Enciendo y apago los aparatos
		bombilla.encender();
		plancha.encender();
		
		// Imprimo los resultados
		System.out.println("\nEnciendo la bombilla y la plancha:");
		System.out.println("Bombilla: " + bombilla.toString());
		System.out.println("Radiador: " + radiador.toString());
		System.out.println("Plancha: " + plancha.toString());
		System.out.println("El consumo total es de " + AparatosElect.getConsumoTotal());
		
		// Enciendo y apago los aparatos
		radiador.encender();
		plancha.apagar();
		
		// Imprimo los resultados
		System.out.println("\nEnciendo el radiador y apago la plancha:");
		System.out.println("Bombilla: " + bombilla.toString());
		System.out.println("Radiador: " + radiador.toString());
		System.out.println("Plancha: " + plancha.toString());
		System.out.println("El consumo total es de " + AparatosElect.getConsumoTotal());
	}
}