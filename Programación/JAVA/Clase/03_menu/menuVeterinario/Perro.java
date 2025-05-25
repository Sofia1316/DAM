package examen3;

public class Perro extends Animal{
	String raza;

	public Perro(String id, String nombre, int edad, boolean atendido, String raza) {
		super(id, nombre, edad, atendido);
		this.raza = raza;
	}

	public String getRaza() {
		return raza;
	}

	public void setRaza(String raza) {
		this.raza = raza;
	}
	
	public String info() {
		return "El perro llamado " + nombre + " es de raza " + raza;
	}

	@Override
	public String toString() {
		String aten;
		if(atendido) {
			aten = "atendido";
		} else {
			aten = "no atendido";
		}
		
		return "Perro " + "\n" + 
				"Raza: "+ raza + "\n" + 
				"id: " + id + "\n" + 
				"nombre: " + nombre + "\n" + 
				"edad: " + edad + "\n" + 
				"atendido: " + aten + "\n" ;
	}
	
	
}
