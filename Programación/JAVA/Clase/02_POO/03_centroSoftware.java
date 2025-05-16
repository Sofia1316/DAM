package POO2;

public class centroSoftware {

	public static void main(String[] args) {
		System.out.println("PROFESORES: ");
		profesor prof1 = new profesor("01010101a", "Emilio", "Manzorro", 1500.0, 3, true);
		profesor prof2 = new profesor("02020202b", "Julia", "Martín", 1900.0, 1, false);
		System.out.println(prof1.toString());
		System.out.println(prof2.toString());
		
		System.out.println("\nADMINISTRADORES: ");
		administracion admin1 = new administracion("03030303c", "Maria", "Jimenez", 2000.0, "ADE", 5);
		administracion admin2 = new administracion("04040404d", "Pedro", "Rodriguez", 2600.0, "Periodismo", 9);
		System.out.println(admin1.toString());
		System.out.println(admin2.toString());
		
		System.out.println("\nDIRECTIVOS: ");
		directivo direc1 = new directivo("05050505e", "Vicente", "Valles", 3020, true, Turno.maniana);
		directivo direc2 = new directivo("06060606f", "Carla", "Marin", 3500, false, Turno.tarde);
		System.out.println(direc1.toString());
		System.out.println(direc2.toString());
		
		modulo mod1 = new modulo("Programacion", 20, prof2, false);
		modulo mod2 = new modulo("BBDD", 12, prof1, false);
		
		modulo[] modulosPaula = { mod1, mod2 };
		modulo[] modulosJoel = { mod2 };
		
		alumno alum1 = new alumno("02020202b", "Paula", "Burgos", 0, "01/08/2006", Sexo.mujer, false, modulosPaula);
		alumno alum2 = new alumno("02020202C", "Joel", "Blanco", 0, "06/08/2005", Sexo.hombre, true, modulosJoel);
		
		System.out.println("\nMÓDULOS: ");
		System.out.println(mod1.toString());
		System.out.println(mod2.toString());
		
		System.out.println("\nALUMNOS: ");
		System.out.println(alum1.toString());
		System.out.println(alum2.toString());
	}
}
