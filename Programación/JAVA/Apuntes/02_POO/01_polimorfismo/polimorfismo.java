package polimorfismo;

public class polimorfismo {

	public static void main(String[] args) {
		// Esto no se puede hacer porque el 1 es int y vector es String
		/*String vector[] = new String[3];
		vector[0] = 1;*/
		
		// el polimorfismo nos permite mezclar tipos de datos
		Persona vector [] = new Persona[5];
		vector[0] = new Persona();
		vector[1] = new Empleado();
		vector[2] = new consultor();
		vector[3] = new jefe();
		// vector[4] = "hola"; --> no se puede porque solo permite mezclar distintos tipos de datos si son hijas
		
		Persona pers = new Persona();
		consultor consul = new consultor();
		
		pers = consul; // esto también lo permite el polimorfismo
		// consul = pers; --> pero eso solo se permite de padre a hijo, no de hijo a padre
	}

}
