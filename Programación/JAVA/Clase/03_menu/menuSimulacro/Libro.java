package simulacro;

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

	@Override
	public String toString() {
		return "Libro [autor=" + autor + ", id=" + id + ", titulo=" + titulo + ", disponible=" + disponible + "]";
	}
	
}
