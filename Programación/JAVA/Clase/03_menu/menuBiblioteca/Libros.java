package menuBiblio;

public class Libros extends Articulo {
	private String autor;

	public Libros(int idArt, String titulo, boolean disponibilidad, String autor) {
		super(idArt, titulo, disponibilidad);
		this.autor = autor;
	}

	public String getAutor() {
		return autor;
	}

	public void setAutor(String autor) {
		this.autor = autor;
	}

	@Override
	public String toString() {
		String dispo;
		if (disponibilidad) {
			dispo = "si";
		} else {
			dispo = "no";
		}
		
		return "Autor: " + autor + "\n" 
				+ "ID: " + idArt + "\n" 
				+ "Titulo: " + titulo + "\n"
				+ "Disponibilidad: " + dispo;
	}
}
