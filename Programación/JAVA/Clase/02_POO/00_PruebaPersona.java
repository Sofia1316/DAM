package POO;

public class PruebaPersona {

	public static void main(String[] args) {
		Persona p1 = new Persona(55, 1.8, 85, false, "aguda");
		System.out.println(p1.toString()); // como te devuelve una cadena pues lo imprimo directamente
		
		p1.setAltura(1.2); // por ejemplo si queremos cambiar la altura con el set (actualizar valor)
		System.out.println(p1.toString());
		
		System.out.println("La altura de esta persona es: " + p1.getAltura());// otra forma de imprimir
	
		Persona p2 = new Persona(99); // como solo definimos edad, el resto de valores salen los predeterminados
		System.out.println(p2.toString());
		p2.setAltura(1.85);
		p2.setPeso(80);
		p2.setPelo(true);
		p2.setVoz("Grave");
		System.out.println("P2 " + p2.toString());
	}

}
