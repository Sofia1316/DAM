package POO;

public class AparatosElect {
	// VARIABLES
	int consumoAparato = 0;
	boolean estado = false;
	// int consumoTotal = 0; no sería válido porque no queremos que cada aparato tenga un total de consumo, si uno uno genérico de todos
	static public int consumoTotal; // debo hacerlo pero con variable global
	
	// CONSTRUCTORES
	public AparatosElect(int consumoAparato, boolean estado) {
		this.consumoAparato = consumoAparato;
		this.estado = estado;
	}
	
	// GETTERS Y SETTERS
	public int getConsumoAparato() {
		return consumoAparato;
	}
	public void setConsumoAparato(int consumoAparato) {
		this.consumoAparato = consumoAparato;
	}
	public boolean isEstado() {
		return estado;
	}
	public void setEstado(boolean estado) {
		this.estado = estado;
	}
	
	public static int getConsumoTotal() {
		return consumoTotal;
	}
	public static void setConsumoTotal(int consumoTotal) {
		AparatosElect.consumoTotal = consumoTotal;
	}
	
	// FUNCIONES PARA EL APAGADO Y EL ENCENDIDO DE LOS APARATOS
	public void encender() { // si está encendido, lo apago
	    if (!estado) { 
	        estado = true;
	        consumoTotal += consumoAparato;
	    }
	}

	public void apagar() {
	    if (estado) { // si está apagado (false), que se mantenga en false
	        estado = false;
	        consumoTotal -= consumoAparato;
	    }
	}

	// IMPRIMIR
	public String toString() {
		return "consumoAparato=" + consumoAparato + ", estado=" + estado + "";
	}

}
