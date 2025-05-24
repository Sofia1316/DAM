package examen2;

public class Revista extends Articulo{
	private int numEdicion;

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
		return "Revista " + titulo + " con nº de serie " + numEdicion;
	}

	@Override
	public String toString() {
		String disp;
		if(disponible == true) {
			disp = " disponible";
		} else {
			disp = " no disponible";
		}
		
		return "Revista [numEdicion=" + numEdicion + ", id=" + id + ", titulo=" + titulo + ", disponible=" + disp;
	}
	
}
