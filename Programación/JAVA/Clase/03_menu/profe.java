package ejercicioMenu;

public class Profesor extends Persona {
	int numAsignatura;
	boolean esProfe;
	
	public Profesor(String dni, String nombre, String apellido, double salario, int numAsignatura, boolean esProfe) {
		super(dni, nombre, apellido, salario);
		this.numAsignatura = numAsignatura;
		this.esProfe = esProfe;
	}

	public int getNumAsignatura() {
		return numAsignatura;
	}

	public void setNumAsignatura(int numAsignatura) {
		this.numAsignatura = numAsignatura;
	}

	public boolean isEsProfe() {
		return esProfe;
	}

	public void setEsProfe(boolean esProfe) {
		this.esProfe = esProfe;
	}

	@Override
	public String toString() {
	    return "Detalles del profesor:\n" +
	           "- Número de asignaturas: " + numAsignatura + "\n" +
	           "- Es profesor: " + esProfe + "\n" +
	           "- DNI: " + dni + "\n" +
	           "- Nombre: " + nombre + "\n" +
	           "- Apellido: " + Apellido + "\n" +
	           "- Salario: " + salario;
	}
	
}
