package SLS_Examen_POO;

enum Tipo{
	Vela,
	Pesca,
	Pasajeros
}

public class Barco extends Vehículo{
	private int eslora;
	private int calado;
	Tipo tipo;
	
	public Barco(String marca, String color, String numeroBastidor, int kilometros, int eslora, int calado, Tipo tipo) {
		super(marca, color, numeroBastidor, kilometros);
		this.eslora = eslora;
		this.calado = calado;
		this.tipo = tipo;
	}

	public int getEslora() {
		return eslora;
	}

	public void setEslora(int eslora) {
		this.eslora = eslora;
	}

	public int getCalado() {
		return calado;
	}

	public void setCalado(int calado) {
		this.calado = calado;
	}

	public Tipo getTipo() {
		return tipo;
	}

	public void setTipo(Tipo tipo) {
		this.tipo = tipo;
	}

	@Override
	public String toString() {
		return "Barco [eslora=" + eslora + ", calado=" + calado + ", tipo=" + tipo + ", marca=" + marca + ", color="
				+ color + ", numeroBastidor=" + numeroBastidor + ", kilometros=" + kilometros;
	}
	
}
