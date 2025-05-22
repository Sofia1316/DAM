package menuBiblio;

public class Prestamo {
	private Articulo articulo;
	private String fecha;
	private int contador;
	
	public Prestamo(Articulo articulo, String fecha) {
		super();
		this.articulo = articulo;
		this.fecha = fecha;
		this.contador = 0;
	}

	public Articulo getArticulo() {
		return articulo;
	}

	public void setArticulo(Articulo articulo) {
		this.articulo = articulo;
	}

	public String getFecha() {
		return fecha;
	}

	public void setFecha(String fecha) {
		this.fecha = fecha;
	}

	public int getContador() {
		return contador;
	}

	public void setContador(int contador) {
		this.contador = contador;
	}

	@Override
	public String toString() {
		return "Préstamo del artículo: " + articulo.getTitulo() + ", fecha: " + fecha + ", veces prestado: " + contador +
				", disponibilidad actual del artículo: " + articulo.isDisponibilidad();
	}

}
