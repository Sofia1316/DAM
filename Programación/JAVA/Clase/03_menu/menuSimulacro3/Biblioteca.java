package examen2;

import java.util.ArrayList;
import java.util.Iterator;

public class Biblioteca {
	String nombre;
	ArrayList<Articulo> articulos = new ArrayList<>();
	ArrayList<Prestamo> prestamos = new ArrayList<>();
	
	public Biblioteca(String nombre, ArrayList<Articulo> articulos, ArrayList<Prestamo> prestamos) {
		super();
		this.nombre = nombre;
		this.articulos = articulos;
		this.prestamos = prestamos;
	}
	public Biblioteca(String nombre) {
		super();
		this.nombre = nombre;
	}
	
	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	public ArrayList<Articulo> getArticulos() {
		return articulos;
	}
	public void setArticulos(ArrayList<Articulo> articulos) {
		this.articulos = articulos;
	}
	public ArrayList<Prestamo> getPrestamos() {
		return prestamos;
	}
	public void setPrestamos(ArrayList<Prestamo> prestamos) {
		this.prestamos = prestamos;
	}
	
	// FUNCIONES
	public void agregarArticulo(Articulo a) {
		articulos.add(a);
	}
	
	public Articulo buscarArticulo(String id) {
		for(Articulo a : articulos) {
			if(a.getId().equals(id)) {
				System.out.println("Artículo encontrado: " + a);
				return a;
			}
		}
		return null;
	}
	
	public boolean prestarArticulo(String idArticulo, Usuario usuario, String fecha) {
		Articulo articulo = buscarArticulo(idArticulo);
		
		articulo.prestar();
		Prestamo prest1 = new Prestamo(articulo, usuario, fecha);
		prestamos.add(prest1);
		System.out.println("Artículo prestado");
		return true;
	}
	
	public boolean devolverArticulo(String idUsuario) {
		Articulo articulo = buscarArticulo(idUsuario);
		
		articulo.devolver();
		System.out.println("Artículo devuelto");
		return true;
	}
	
	public void mostrar() {
		for(Articulo a : articulos) {
			System.out.println(a);
		}
	}
	
	public void mostrarPrestamos() {
		for(Prestamo p : prestamos) {
			System.out.println(p);
			System.out.println("Número de préstamos: " + Prestamo.getContadorPrestamos());
		}
	}
	
	public void mostarPU(String idUsuario) {
		boolean encontrado = false;
	    for (Prestamo p : prestamos) {
	        if (p.getUsuario().getIdUsuario().equals(idUsuario)) {
	            System.out.println(p);
	            encontrado = true;
	        }
	    }
	}
	
}
