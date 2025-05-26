package SLS_Examen_POO;

public class Coche extends Vehículo{
	protected boolean electrico;
	private boolean antiguo;

	public Coche(String marca, String color, String numeroBastidor, int kilometros, boolean electrico,
			boolean antiguo) {
		super(marca, color, numeroBastidor, kilometros);
		this.electrico = electrico;
		this.antiguo = antiguo;
	}

	public void Coche(boolean electrico) {
		this.electrico = electrico;
	}

	public boolean isElectrico() {
		return electrico;
	}

	public void setElectrico(boolean electrico) {
		this.electrico = electrico;
	}

	public boolean isAntiguo() {
		return antiguo;
	}

	public void setAntiguo(boolean antiguo) {
		this.antiguo = antiguo;
	}

	@Override
	public String toString() {
		return "Coche [electrico=" + electrico + ", antiguo=" + antiguo + ", marca=" + marca + ", color=" + color
				+ ", numeroBastidor=" + numeroBastidor + ", kilometros=" + kilometros;
	}
}
