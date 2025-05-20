package ejercicioMenu;

enum Turno{
	maniana,
	tarde
}

public class Directivo extends Persona {
	boolean salesiano;
	Turno horaTurno;
	
	public Directivo(String dni, String nombre, String apellido, double salario, boolean salesiano, Turno horaTurno) {
		super(dni, nombre, apellido, salario);
		this.salesiano = salesiano;
		this.horaTurno = horaTurno;
	}
	
	public boolean isSalesiano() {
		return salesiano;
	}
	public void setSalesiano(boolean salesiano) {
		this.salesiano = salesiano;
	}
	public Turno getHoraTurno() {
		return horaTurno;
	}
	public void setHoraTurno(Turno horaTurno) {
		this.horaTurno = horaTurno;
	}

	@Override
	public String toString() {
	    return "Detalles del directivo:\n" +
	    		"- Salesiano: " + salesiano + "\n" +
	    		"- Hora de turno: " + horaTurno + "\n" +
	    		"- DNI: " + dni + "\n" +
	    		"- Nombre: " + nombre + "\n" +
	    		"- Apellido: " + Apellido + "\n" +
	    		"- Salario: " + salario;
	}

}
