package POO2;

enum Sexo{
	hombre,
	mujer
}

public class alumno{
	String dni;
	String nombre;
	String apellido;
	String fechaNacimiento;
	Sexo genero;
	boolean repetidor;
	modulo[] matriculadoModulo;
	
	public alumno(String dni, String nombre, String apellido, String fechaNacimiento, Sexo genero, boolean repetidor,
			modulo []matriculadoModulo) {
		super();
		this.dni = dni;
		this.nombre = nombre;
		this.apellido = apellido;
		this.fechaNacimiento = fechaNacimiento;
		this.genero = genero;
		this.repetidor = repetidor;
		this.matriculadoModulo = matriculadoModulo;
	}

	public String getDni() {
		return dni;
	}

	public void setDni(String dni) {
		this.dni = dni;
	}

	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public String getApellido() {
		return apellido;
	}

	public void setApellido(String apellido) {
		this.apellido = apellido;
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
		return "alumno [dni=" + dni + ", nombre=" + nombre + ", apellido=" + apellido + ", fechaNacimiento="
				+ fechaNacimiento + ", genero=" + genero + ", repetidor=" + repetidor + ", matriculadoModulo="
				+ matriculadoModulo + "]";
	}
	
}
