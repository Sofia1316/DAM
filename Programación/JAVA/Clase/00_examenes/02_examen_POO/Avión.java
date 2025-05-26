package SLS_Examen_POO;

public class Avión extends Vehículo{
	private int motores;
	private double maxVelocidad;
	private boolean combate;
	
	public Avión(String marca, String color, String numeroBastidor, int kilometros, int motores, double maxVelocidad,
			boolean combate) {
		super(marca, color, numeroBastidor, kilometros);
		this.motores = motores;
		this.maxVelocidad = maxVelocidad;
		this.combate = combate;
	}

	private Avión(String marca, String color, String numeroBastidor, int kilometros, boolean combate) {
		super(marca, color, numeroBastidor, kilometros);
		this.combate = combate;
	}

	public int getMotores() {
		return motores;
	}

	public void setMotores(byte motores) {
		this.motores = motores;
	}

	public double getMaxVelocidad() {
		return maxVelocidad;
	}

	public void setMaxVelocidad(double maxVelocidad) {
		this.maxVelocidad = maxVelocidad;
	}

	public boolean isCombate() {
		return combate;
	}

	@Override
	public String toString() {
		return "Avión [motores=" + motores + ", maxVelocidad=" + maxVelocidad + ", combate=" + combate + ", marca="
				+ marca + ", color=" + color + ", numeroBastidor=" + numeroBastidor + ", kilometros=" + kilometros;
	}
	
}
