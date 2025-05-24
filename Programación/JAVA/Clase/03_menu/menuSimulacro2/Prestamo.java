package examen1;

public class Prestamo {
	Articulo articulo;
	Usuario usuario;
	String fecha;
	static int contadorPrestamos;
	
	public Prestamo(Articulo articulo, Usuario usuario, String fecha) {
		super();
		this.articulo = articulo;
		this.usuario = usuario;
		this.fecha = fecha;
	}
	
	public Articulo getArticulo() {
		return articulo;
	}
	public void setArticulo(Articulo articulo) {
		this.articulo = articulo;
	}
	public Usuario getUsuario() {
		return usuario;
	}
	public void setUsuario(Usuario usuario) {
		this.usuario = usuario;
	}
	public String getFecha() {
		return fecha;
	}
	public void setFecha(String fecha) {
		this.fecha = fecha;
	}
	public static int getContadorPrestamos() {
		return contadorPrestamos;
	}
	public static void setContadorPrestamos(int contadorPrestamos) {
		Prestamo.contadorPrestamos = contadorPrestamos;
	}
	
	@Override
	public String toString() {
		return "Prestamo [articulo=" + articulo + ", usuario=" + usuario + ", fecha=" + fecha + "]";
	}
	
	
}
