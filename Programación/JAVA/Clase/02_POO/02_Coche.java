package POO;

enum tipoCoche{ // no se pueden declarar dentro de funciones
	mini,
	utilitario,
	familiar,
	deportivo
}
enum modalidadRiesgo{
	terceros,
	todoRiesgo
}

public class coche03 {
	String modelo;
	String color;
	String matricula;
	boolean metalizado;
	int añoFabricacion;
	tipoCoche unCoche;
	modalidadRiesgo seguro;
	
	public coche03(String modelo, String color, String matricula, boolean metalizado, int añoFabricacion,
			tipoCoche unCoche, modalidadRiesgo seguro) {
		super();
		this.modelo = modelo;
		this.color = color;
		this.matricula = matricula;
		this.metalizado = metalizado;
		this.añoFabricacion = añoFabricacion;
		this.unCoche = unCoche;
		this.seguro = seguro;
	}

	public String getModelo() {
		return modelo;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public String getColor() {
		return color;
	}

	public void setColor(String color) {
		this.color = color;
	}

	public String getMatricula() {
		return matricula;
	}

	public void setMatricula(String matricula) {
		this.matricula = matricula;
	}

	public boolean isMetalizado() {
		return metalizado;
	}

	public void setMetalizado(boolean metalizado) {
		this.metalizado = metalizado;
	}

	public int getAñoFabricacion() {
		return añoFabricacion;
	}

	public void setAñoFabricacion(int añoFabricacion) {
		this.añoFabricacion = añoFabricacion;
	}

	public tipoCoche getUnCoche() {
		return unCoche;
	}

	public void setUnCoche(tipoCoche unCoche) {
		this.unCoche = unCoche;
	}

	public modalidadRiesgo getSeguro() {
		return seguro;
	}

	public void setSeguro(modalidadRiesgo seguro) {
		this.seguro = seguro;
	}

	@Override
	public String toString() {
		return "modelo=" + modelo + ", color=" + color + ", matricula=" + matricula + ", metalizado="
				+ metalizado + ", añoFabricacion=" + añoFabricacion + ", unCoche=" + unCoche + ", seguro=" + seguro;
	}
}
