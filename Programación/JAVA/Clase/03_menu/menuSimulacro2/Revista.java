package examen1;

public class Revista extends Articulo{
	int numEdicion;

	public Revista(String id, String titulo, boolean disponible, int numEdicion) {
		super(id, titulo, disponible);
		this.numEdicion = numEdicion;
	}

	public int getNumEdicion() {
		return numEdicion;
	}

	public void setNumEdicion(int numEdicion) {
		this.numEdicion = numEdicion;
	}
	
	public String getDescripcion() {
		return "Libro" + titulo + " y con número de edición " + numEdicion;
	}

	@Override
	public String toString() {
		String aux = null;
		if(disponible) {
			aux = " está disponible";
		} else {
			aux = " no está disponible";
		}
		
		return "REVISTA: " + "\n" +
				"numEdicion=" + numEdicion + "\n" + 
				", id=" + id + "\n" + 
				", titulo=" + titulo + "\n" + 
				", disponible=" + aux;
	}
	
}
