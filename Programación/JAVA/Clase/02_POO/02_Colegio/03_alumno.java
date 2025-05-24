package POO2;

import java.util.Arrays;

enum Sexo{
	hombre,
	mujer
}

public class alumno extends persona{
	String fechaNacimiento;
	Sexo genero;
	boolean repetidor;
	modulo[] matriculadoModulo;
	
	public alumno(String dni, String nombre, String apellido, double salario, String fechaNacimiento, Sexo genero,
			boolean repetidor, modulo[] matriculadoModulo) {
		super(dni, nombre, apellido, salario);
		this.fechaNacimiento = fechaNacimiento;
		this.genero = genero;
		this.repetidor = repetidor;
		this.matriculadoModulo = matriculadoModulo;
	}

	public String getFechaNacimiento() {
		return fechaNacimiento;
	}

	public void setFechaNacimiento(String fechaNacimiento) {
		this.fechaNacimiento = fechaNacimiento;
	}

	public Sexo getGenero() {
		return genero;
	}

	public void setGenero(Sexo genero) {
		this.genero = genero;
	}

	public boolean isRepetidor() {
		return repetidor;
	}

	public void setRepetidor(boolean repetidor) {
		this.repetidor = repetidor;
	}

	public modulo[] getMatriculadoModulo() {
		return matriculadoModulo;
	}

	public void setMatriculadoModulo(modulo[] matriculadoModulo) {
		this.matriculadoModulo = matriculadoModulo;
	}

	@Override
	public String toString() {
		return "alumno [fechaNacimiento=" + fechaNacimiento + ", genero=" + genero + ", repetidor=" + repetidor
				+ ", matriculadoModulo=" + Arrays.toString(matriculadoModulo) + ", dni=" + dni + ", nombre=" + nombre
				+ ", Apellido=" + Apellido + ", salario=" + salario + "]";
	}

}
