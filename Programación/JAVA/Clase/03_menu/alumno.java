package ejercicioMenu;

import java.util.Arrays;

enum Sexo{
	hombre,
	mujer
}

public class Alumno extends Persona {
	String fechaNacimiento;
	Sexo genero;
	boolean repetidor;
	Modulo[] matriculadoModulo;
	
	public Alumno(String dni, String nombre, String apellido, double salario, String fechaNacimiento, Sexo genero,
			boolean repetidor, Modulo[] matriculadoModulo) {
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

	public Modulo[] getMatriculadoModulo() {
		return matriculadoModulo;
	}

	public void setMatriculadoModulo(Modulo[] matriculadoModulo) {
		this.matriculadoModulo = matriculadoModulo;
	}

	@Override
	public String toString() {
		return "Detalles del alumno \n" +
					"- Fecha de Nacimiento: " + fechaNacimiento + "\n" +
					"- Género: " + genero + "\n" +
					"- Repetidor: " + repetidor + "\n" +
					"- Módulos: " + Arrays.toString(matriculadoModulo) + "\n" +
					"- DNI: " + dni + "\n" +
					"- Nombre: " + nombre + "\n" +
					"- Apellido: " + Apellido + "\n" +
					"- Salario: " + salario + "\n";
	}
}
