package examen3;

public class Animal {
	String id;
	String nombre;
	int edad;
	boolean atendido;
	
	public Animal(String id, String nombre, int edad, boolean atendido) {
		super();
		this.id = id;
		this.nombre = nombre;
		this.edad = edad;
		this.atendido = atendido;
	}
	public String getId() {
		return id;
	}
	public void setId(String id) {
		this.id = id;
	}
	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	public int getEdad() {
		return edad;
	}
	public void setEdad(int edad) {
		this.edad = edad;
	}
	public boolean isAtendido() {
		return atendido;
	}
	public void setAtendido(boolean atendido) {
		this.atendido = atendido;
	}
		
}
