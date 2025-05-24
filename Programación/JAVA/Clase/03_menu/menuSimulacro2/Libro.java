package examen1;

public class Libro extends Articulo{
	String autor;

	public Libro(String id, String titulo, boolean disponible, String autor) {
		super(id, titulo, disponible);
		this.autor = autor;
	}

	public String getAutor() {
		return autor;
	}

	public void setAutor(String autor) {
		this.autor = autor;
	}
	
	public String getDescripcion() {
		return "Libro" + titulo + " y autor " + autor;
	}

	@Override
	public String toString() {
		String aux = null;
		if(disponible) {
			aux = " está disponible";
		} else {
			aux = " no está disponible";
		}
		
		return "LIBRO: " + "\n" +
				"autor=" + autor + "\n" + 
				", id=" + id + "\n" + 
				", titulo=" + titulo + "\n" + 
				", disponible=" + aux;
	}

}
