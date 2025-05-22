package simulacro;

public class Revista extends Articulo{
	int numeroEdicion;

	public Revista(String id, String titulo, boolean disponible, int numeroEdicion) {
		super(id, titulo, disponible);
		this.numeroEdicion = numeroEdicion;
	}

	public int getNumeroEdicion() {
		return numeroEdicion;
	}

	public void setNumeroEdicion(int numeroEdicion) {
		this.numeroEdicion = numeroEdicion;
	}

	@Override
	public String toString() {
		return "Revista [numeroEdicion=" + numeroEdicion + ", id=" + id + ", titulo=" + titulo + ", disponible="
				+ disponible + "]";
	}
	
}
