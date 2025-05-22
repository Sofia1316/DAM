package menuBiblio;

public class Articulo {
	protected int idArt;
	protected String titulo;
	protected boolean disponibilidad;
	
	public Articulo(int idArt, String titulo, boolean disponibilidad) {
		super();
		this.idArt = idArt;
		this.titulo = titulo;
		this.disponibilidad = disponibilidad;
	}
	
	public int getIdArt() {
		return idArt;
	}
	public void setIdArt(int idArt) {
		this.idArt = idArt;
	}
	public String getTitulo() {
		return titulo;
	}
	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}
	public boolean isDisponibilidad() {
		return disponibilidad;
	}
	public void setDisponibilidad(boolean disponibilidad) {
		this.disponibilidad = disponibilidad;
	}
	
	public void prestar() {
	    if (disponibilidad) {
	        disponibilidad = false;
	    }
	}

	public void devolver() {
	    if (!disponibilidad) {
	        disponibilidad = true;
	    }
	}
}
