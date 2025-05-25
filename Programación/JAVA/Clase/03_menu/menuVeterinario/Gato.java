package examen3;

public class Gato extends Animal{
	String colorPelo;

	public Gato(String id, String nombre, int edad, boolean atendido, String colorPelo) {
		super(id, nombre, edad, atendido);
		this.colorPelo = colorPelo;
	}

	public String getColorPelo() {
		return colorPelo;
	}

	public void setColorPelo(String colorPelo) {
		this.colorPelo = colorPelo;
	}
	public String info() {
		return "El gato llamado " + nombre + " tiene el pelo de color " + colorPelo;
	}

	@Override
	public String toString() {
		String aten;
		if(atendido) {
			aten = " atendido";
		} else {
			aten = " no atendido";
		}
		
		return "Gato " + "\n" + 
				"Color de pelo: "+ colorPelo + "\n" + 
				"id: " + id + "\n" + 
				"nombre: " + nombre + "\n" + 
				"edad: " + edad + "\n" + 
				"atendido: " + aten + "\n" ;
	}
	
}
