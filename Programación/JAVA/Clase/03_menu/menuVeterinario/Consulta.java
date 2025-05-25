package examen3;

public class Consulta {
	Animal animal;
	Propietario propietario;
	String fecha;
	String motivo;
	static int contadorConsultas = 0;
	boolean finalizado;
	
	public Consulta(Animal animal, Propietario propietario, String fecha, String motivo) {
		super();
		this.animal = animal;
		this.propietario = propietario;
		this.fecha = fecha;
		this.motivo = motivo;
		contadorConsultas++;
	}
	
	public Animal getAnimal() {
		return animal;
	}
	public void setAnimal(Animal animal) {
		this.animal = animal;
	}
	public Propietario getPropietario() {
		return propietario;
	}
	public void setPropietario(Propietario propietario) {
		this.propietario = propietario;
	}
	public String getFecha() {
		return fecha;
	}
	public void setFecha(String fecha) {
		this.fecha = fecha;
	}
	public String getMotivo() {
		return motivo;
	}
	public void setMotivo(String motivo) {
		this.motivo = motivo;
	}
	public static int getContadorConsultas() {
		return contadorConsultas;
	}
	public static void setContadorConsultas(int contadorConsultas) {
		Consulta.contadorConsultas = contadorConsultas;
	}

	@Override
	public String toString() {
		return "Consulta del animal" + animal + ", propietario=" + propietario + ", fecha=" + fecha + ", motivo=" + motivo;
	}
}
