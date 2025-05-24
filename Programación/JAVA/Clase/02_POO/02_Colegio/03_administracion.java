package POO2;

public class administracion extends persona{
	String estudios;
	int antiguedad;
	
	public administracion(String dni, String nombre, String apellido, double salario, String estudios, int antiguedad) {
		super(dni, nombre, apellido, salario);
		this.estudios = estudios;
		this.antiguedad = antiguedad;
	}

	public String getEstudios() {
		return estudios;
	}

	public void setEstudios(String estudios) {
		this.estudios = estudios;
	}

	public int getAntiguedad() {
		return antiguedad;
	}

	public void setAntiguedad(int antiguedad) {
		this.antiguedad = antiguedad;
	}

	@Override
	public String toString() {
		return "administracion [estudios=" + estudios + ", antiguedad=" + antiguedad + ", dni=" + dni + ", nombre="
				+ nombre + ", Apellido=" + Apellido + ", salario=" + salario + "]";
	}
	
}
