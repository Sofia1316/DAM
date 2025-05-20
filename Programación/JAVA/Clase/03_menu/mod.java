
public class Modulo {
	String nombre;
	int numHoras;
	Profesor tieneProfesor;
	boolean convalidar;
	
	public String getNombre() {
		return nombre;
	}
	
	public Modulo(String nombre, int numHoras, Profesor tieneProfesor, boolean convalidar) {
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
	public Profesor getTieneProfesor() {
		return tieneProfesor;
	}
	public void setTieneProfesor(Profesor tieneProfesor) {
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
