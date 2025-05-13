
public class Prueba1 {

	public static void main(String[] args) {

		String fragmentoNombreAlumnos = "Víctor";
		String[] nombreAlumnos = {"Antonio","Marta","Víctor Hugo","David"};
		
		int resultado = contarUsuarios(fragmentoNombreAlumnos, nombreAlumnos);
		System.out.println("Total resultados: " + resultado);

	}
	
	static int contarUsuarios(String fragmentoNombreAlumno, String[] nombreAlumnos) {
		boolean encontrado = false;
		int totalEncontrados = 0;
		
		for(String nombreAlumnoActual : nombreAlumnos) { // recorre el array de, nombreAlumnoActual (Antonio) es igual que nombreAlumnos (Victor), no, pues entonces entra
			if(nombreAlumnoActual.contains(fragmentoNombreAlumno)) { // 
				encontrado = true;
			}
			
			if (encontrado) {
				totalEncontrados++;
				// SOLUCIÓN PARA QUE ME CUENTE SOLO 1 Y NO DOS, porque la bandera, es decir, el bool no se llega a reiniciar entonces cuando llega a Víctor, 
				// sigue contando como true lo de después ---> encontrado = false;
			}
		}
		return totalEncontrados;
	}
}
