package menuBiblio;

public class Revistas extends Articulo{
	private int numEdicion;

	public Revistas(int idArt, String titulo, boolean disponibilidad, int numEdicion) {
		super(idArt, titulo, disponibilidad);
		this.numEdicion = numEdicion;
	}

	public int getNumEdicion() {
		return numEdicion;
	}

	public void setNumEdicion(int numEdicion) {
		this.numEdicion = numEdicion;
	}

	@Override
	public String toString() {
		String dispo;
		if (disponibilidad) {
			dispo = "si";
		} else {
			dispo = "no";
		}
		
		return "Número de edición es: " + numEdicion + "\n" 
		+ "ID: " + idArt + "\n" 
		+ "Titulo: " + titulo + "\n"
		+ "Disponibilidad: " + dispo;
	}
	
}
