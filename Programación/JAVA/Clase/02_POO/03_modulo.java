package POO2;

public class modulo {
	String nombre;
	int numHoras;
	profesor tieneProfesor;
	boolean convalidar;
	
	public String getNombre() {
		return nombre;
	}
	
	public modulo(String nombre, int numHoras, profesor tieneProfesor, boolean convalidar) {
		super();
		this.nombre = nombre;
		this.numHoras = numHoras;
		this.tieneProfesor = tieneProfesor;
		this.convalidar = convalidar;
	}
	
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	public int getNumHoras() {
		return numHoras;
	}
	public void setNumHoras(int numHoras) {
		this.numHoras = numHoras;
	}
	public profesor getTieneProfesor() {
		return tieneProfesor;
	}
	public void setTieneProfesor(profesor tieneProfesor) {
		this.tieneProfesor = tieneProfesor;
	}
	public boolean isConvalidar() {
		return convalidar;
	}
	public void setConvalidar(boolean convalidar) {
		this.convalidar = convalidar;
	}

	@Override
	public String toString() {
		return "modulo [nombre=" + nombre + ", numHoras=" + numHoras + ", tieneProfesor=" + tieneProfesor
				+ ", convalidar=" + convalidar + "]";
	}

}
