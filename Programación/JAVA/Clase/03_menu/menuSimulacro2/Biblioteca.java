package examen1;

import java.util.ArrayList;
import java.util.Iterator;

public class Biblioteca {
	String nombre;
	ArrayList<Articulo>articulos = new ArrayList<>();
	ArrayList<Prestamo>prestamos = new ArrayList<>();
	
	// CONSTRUCTORES
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
	
	// GETTERS SETTERS
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
	
	public Articulo buscarArticuloID(String id) {
		for(Articulo a : articulos) {
			if(a.getId().equals(id)) {
				return a; // lo encuentra
			}
		}
		return null; // no lo encuentra
	}
	
	public boolean prestarArticulo(String id, Usuario usuario, String fecha) {
		Articulo articulo = buscarArticuloID(id);
		
		articulo.prestar();
		Prestamo prest1 = new Prestamo(articulo, usuario, fecha);
		prestamos.add(prest1);
		System.out.println("Se ha prestado a " + usuario.getNombre());
		return true;
	}
	
	public boolean devolverArticulo(String idArticulo) {
		Articulo articulo = buscarArticuloID(idArticulo);
		
		articulo.devolver();
		return true;
	}
	
	public void mostarTodo() {
		for(Articulo a : articulos) {
			System.out.println(a);
		}
	}
	
	public void mostarPrestamos() {
		for(Prestamo p : prestamos) {
			System.out.println(p);
		}
	}
	
	public void mostarPresUser(String idUsuario) {
		boolean encontrado = false;
	    for (Prestamo p : prestamos) {
	        if (p.getUsuario().getIdUsuario().equals(idUsuario)) {
	            System.out.println(p);
	            encontrado = true;
	        }
	    }

	}
}
