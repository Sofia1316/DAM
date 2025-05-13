package POO;

public class Persona {

	int edad;
	double altura;
	double peso;
	boolean pelo;
	String voz;
	
	public int getEdad() {
		return edad; // obtenemos el dato
	}
	public void setEdad(int edad) {
		this.edad = edad; // actualizamos el dato (el this hace referencia a lo que tenemos con lo que creamos nuevo)
	}
	public void setEdad(int edad, int fecha) {
		this.edad = edad+fecha; 
	}
	
	public double getAltura() {
		return altura;
	}
	public void setAltura(double altura) {
		this.altura = altura;
	}
	
	public double getPeso() {
		return peso;
	}
	public void setPeso(double peso) {
		this.peso = peso;
	}
	
	public boolean isPelo() { // en los boolean es distinto, como una pregunta
		return pelo;
	}
	public void setPelo(boolean pelo) {
		this.pelo = pelo;
	}
	
	public String getVoz() {
		return voz;
	}
	public void setVoz(String voz) {
		this.voz = voz;
	}
	
	// CONSTRUCTORES PARA PODER HACER USO DE GETTERS Y SETTERS
	public Persona(int edad, double altura, double peso, boolean pelo, String voz) {
		super(); // para llamar a la clase padre que sea exactamente igual (pero como no tenemos, no es necesario)
		this.edad = edad;
		this.altura = altura;
		this.peso = peso;
		this.pelo = pelo;
		this.voz = voz;
	}
	
	public Persona(int edad) { // con este constructor se puede bucar una persona solo con la edad
		this.edad = edad;
		/*this.altura = 0;
		this.peso = 0;
		this.pelo = false;
		this.voz = " ";*/
	}
	
	@Override // lo estamos sobrescribiendo
	public String toString() { // accedemos a todas las variables y nos genera la cadena para preguntar todo lo que hemos generado
		return "Persona [edad=" + edad + ", altura=" + altura + ", peso=" + peso + ", pelo=" + pelo + ", voz=" + voz + "]";
	}	
}