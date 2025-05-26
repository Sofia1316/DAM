package SLS_Examen_POO;

public class Vehículo {
	String marca;
	String color;
	String numeroBastidor;
	int kilometros;
	protected int añoFabricacion;
	
	public Vehículo(String marca, String color, String numeroBastidor, int kilometros) {
		super();
		this.marca = marca;
		this.color = color;
		this.numeroBastidor = numeroBastidor;
		this.kilometros = kilometros;
	}
	
	private String getMarca() {
		return marca;
	}
	private void setMarca(String marca) {
		this.marca = marca;
	}
	private String getColor() {
		return color;
	}
	private void setColor(String color) {
		this.color = color;
	}
	private String getNumeroBastidor() {
		return numeroBastidor;
	}
	private void setNumeroBastidor(String numeroBastidor) {
		this.numeroBastidor = numeroBastidor;
	}
	private int getKilometros() {
		return kilometros;
	}
	private void setKilometros(int kilometros) {
		this.kilometros = kilometros;
	}

	@Override
	public String toString() {
		return "Vehículo [marca=" + marca + ", color=" + color + ", numeroBastidor=" + numeroBastidor + ", kilometros="
				+ kilometros;
	}
	
}
