package herencia;

public class Herencia {

	public static void main(String[] args) {
		Empleado emp = new Empleado(0, null, null, null, null, null, 0, null, 0);
		emp.getNumEmpleado(); // entonces puedo llamar tanto sus propias características
		emp.getNombre(); // como también las características de su padre, es decir, de Persona
		
		consultor cons = new consultor(0, null, null, null, null, null, null, 0);
		cons.getNombreConsultor();
		cons.getDni();
	}

}
