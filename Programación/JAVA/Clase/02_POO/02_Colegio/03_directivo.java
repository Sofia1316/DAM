package POO2;

enum Turno{
	maniana,
	tarde
}

public class directivo extends persona{
	boolean salesiano;
	Turno horaTurno;
	
	public directivo(String dni, String nombre, String apellido, double salario, boolean salesiano, Turno horaTurno) {
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
		return "directivo [salesiano=" + salesiano + ", horaTurno=" + horaTurno + ", dni=" + dni + ", nombre=" + nombre
				+ ", Apellido=" + Apellido + ", salario=" + salario + "]";
	}
	
}
