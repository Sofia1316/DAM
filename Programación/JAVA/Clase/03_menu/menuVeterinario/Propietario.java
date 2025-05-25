package examen3;

public class Propietario {
	String idPropietario;
	String nombre;
	
	public Propietario(String idPropietario, String nombre) {
		super();
		this.idPropietario = idPropietario;
		this.nombre = nombre;
	}
	
	public String getIdPropietario() {
		return idPropietario;
	}
	public void setIdPropietario(String idPropietario) {
		this.idPropietario = idPropietario;
	}
	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	
	@Override
	public String toString() {
		return "Nombre del propietario: " + nombre + " con id " + idPropietario;
	}
	
}
