package examen3;

import java.util.ArrayList;

public class Veterinario {
	String nombre;
	ArrayList<Animal> animales = new ArrayList<>();
	ArrayList<Propietario> propietarios = new ArrayList<>();
	ArrayList<Consulta> consultas = new ArrayList<>();
	
	public Veterinario(String nombre, ArrayList<Animal> animales, ArrayList<Propietario> propietarios,
			ArrayList<Consulta> consultas) {
		super();
		this.nombre = nombre;
		this.animales = animales;
		this.propietarios = propietarios;
		this.consultas = consultas;
	}
	public Veterinario(String nombre) {
		super();
		this.nombre = nombre;
	}
	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	public ArrayList<Animal> getAnimales() {
		return animales;
	}
	public void setAnimales(ArrayList<Animal> animales) {
		this.animales = animales;
	}
	public ArrayList<Propietario> getPropietarios() {
		return propietarios;
	}
	public void setPropietarios(ArrayList<Propietario> propietarios) {
		this.propietarios = propietarios;
	}
	public ArrayList<Consulta> getConsultas() {
		return consultas;
	}
	public void setConsultas(ArrayList<Consulta> consultas) {
		this.consultas = consultas;
	}
	
	// FUNCIONES
	public void agregarAnimal(Animal a) {
		animales.add(a);
	}

	public void agregarPropietario(Propietario p) {
		propietarios.add(p);
	}
	
	public Animal buscarID(String id) {
		for(Animal a : animales) {
			if(a.getId().equals(id)) {
				System.out.println("Animal encontrado");
				return a;
			}
		}
		return null;
	}
	
	public Propietario buscarIDP(String idp) {
		for(Propietario p: propietarios) {
			if(p.getIdPropietario().equals(idp)) {
				System.out.println("Propietario encontrado");
				return p;
			}
		}
		return null;
	}
	
	public void mostrar() {
		for(Animal a: animales) {
			System.out.println(a);
		}
	}
	
	public void nuevaConsulta(String id, String idp, String fecha, String motivo) {
		Animal anim = buscarID(id);
		Propietario prop = buscarIDP(idp);
		Consulta consulta = new Consulta(anim, prop, fecha, motivo);
        consultas.add(consulta);
        Consulta.getContadorConsultas();
        System.out.println("Consulta añadida");
		
	}
	
	public void finalizarConsulta(String idAnimal) {
	    Animal anim = buscarID(idAnimal);

	    if (anim == null) {
	        System.out.println("Animal no encontrado.");
	        return;
	    }

	    if (anim.isAtendido()) {
	        System.out.println("Este animal ya está atendido.");
	    } else {
	        anim.setAtendido(true);
	        System.out.println("Animal marcado como atendido.");
	    }
	}
	
	public void mostrarConsultas() {
		for(Consulta c : consultas) {
			System.out.println(c);
		}
	}
	
	public void mostrarCU(String idUsuario) {
		boolean encontrado = false;
	    for (Consulta c : consultas) {
	        if (c.getPropietario().getIdPropietario().equals(idUsuario)) {
	            System.out.println(c);
	            encontrado = true;
	        }
	    }
	}
}
