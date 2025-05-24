package examen2;

public class Libro extends Articulo{
	private String autor;
	
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
		return "Revista " + titulo + " con autor " + autor;
	}
	
	@Override
	public String toString() {
		String disp;
		if(disponible == true) {
			disp = " disponible";
		} else {
			disp = " no disponible";
		}
		
		return "Libro [autor=" + autor + ", id=" + id + ", titulo=" + titulo + ", disponible=" + disp;
	}
}
