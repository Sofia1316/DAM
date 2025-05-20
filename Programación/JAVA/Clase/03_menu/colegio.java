import java.util.Scanner;

public class Colegio {

	static Scanner entrada = new Scanner(System.in);
	
	static Profesor profesor1 = null;
	static Administracion administrador1 = null;
	static Directivo directivo1 = null;
	static Modulo modulo1 = null;
	static Alumno alumno1 = null;
	
	public static void main(String[] args) {
		menu();
	}
	
	public static void menu() {
		boolean salida = true;
		
		do {
			System.out.println("MENU DEL COLEGIO:");
			System.out.println("1. profesor");
			System.out.println("2. administrador");
			System.out.println("3. directivo");
			System.out.println("4. módulo");
			System.out.println("5. alumno");
			System.out.println("6. salir");
			System.out.print("Opción: ");
			
			boolean error = entrada.hasNextInt();

			if (error == true) {
				int respuesta = entrada.nextInt();
				
				if (respuesta == 1) {
					profesor();
					mostrarProfesor();
	
				} else if (respuesta == 2) {
					administrador();
					mostrarAdministrador();
					
				} else if (respuesta == 3) {
					directivo();
					mostrarDirectivo();
					
				} else if (respuesta == 4) {
					modulo();
					mostrarModulo();

				} else if (respuesta == 5) {
					alumno();
					mostrarAlumno();

				} else {
					System.out.println("Has salido del programa");
					salida = false;
				}
			} else {
				System.out.println("El valor introducido no es un número");
			}
			
		} while (salida == true);
		
		entrada.close();
	}
	
	static public void profesor() {
		entrada.nextLine();
		
		System.out.print("DNI: ");
        String dni = entrada.nextLine();

        System.out.print("Nombre: ");
        String nombre = entrada.nextLine();

        System.out.print("Apellidos: ");
        String apellidos = entrada.nextLine();

        System.out.print("Sueldo: ");
        double sueldo = entrada.nextDouble();

        System.out.print("Cursos: ");
        int cursos = entrada.nextInt();

        System.out.print("¿Es tutor? (true/false): ");
        boolean esTutor = entrada.nextBoolean();
        entrada.nextLine();

        profesor1 = new Profesor(dni, nombre, apellidos, sueldo, cursos, esTutor);
        System.out.println("Profesor");
        
	}
	
	public static void mostrarProfesor() {
        if (profesor1 != null) {
            System.out.println("\nDatos del profesor:");
            System.out.println(profesor1);
        } else {
            System.out.println("No hay profe");
        }
    }
	
	static public void administrador() {
		entrada.nextLine();
		
		System.out.print("DNI: ");
        String dni = entrada.nextLine();

        System.out.print("Nombre: ");
        String nombre = entrada.nextLine();

        System.out.print("Apellidos: ");
        String apellidos = entrada.nextLine();

        System.out.print("Sueldo: ");
        double sueldo = entrada.nextDouble();

        System.out.print("Número de cursos: ");
        int cursos = entrada.nextInt();

        administrador1 = new Administracion(dni, nombre, apellidos, sueldo, apellidos, cursos);
        System.out.println("Administrador");
        
	}
	
	public static void mostrarAdministrador() {
        if (administrador1 != null) {
            System.out.println("\nDatos del administrador:");
            System.out.println(administrador1);
        } else {
            System.out.println("No hay administrador");
        }
    }
	
	static public void directivo() {
		entrada.nextLine();
		
		System.out.print("DNI: ");
        String dni = entrada.nextLine();

        System.out.print("Nombre: ");
        String nombre = entrada.nextLine();

        System.out.print("Apellidos: ");
        String apellidos = entrada.nextLine();

        System.out.print("Sueldo: ");
        double sueldo = entrada.nextDouble();
        
        System.out.print("¿Es salesiano? (true/false): ");
        boolean salesiano = entrada.nextBoolean();
        entrada.nextLine();

        System.out.print("Turno (maniana o tarde): ");
        String auxturno = entrada.nextLine();

        Turno turno = null;
        if (turno.equals("maniana")) {
            turno = Turno.maniana;
        } else if (turno.equals("tarde")) {
            turno = Turno.tarde;
        } else {
            System.out.println("Turno no válido, te pongo tarde por no saberlo");
            turno = Turno.tarde;
        }

        directivo1 = new Directivo(dni, nombre, apellidos, sueldo, salesiano, turno);
        System.out.println("Directivo creado");
        
	}
	
	public static void mostrarDirectivo() {
        if (administrador1 != null) {
            System.out.println("\nDatos del directivo:");
            System.out.println(administrador1);
        } else {
            System.out.println("No hay directivo");
        }
    }
	
	static public void modulo() {
		entrada.nextLine();
		
		System.out.print("Nombre: ");
        String nombre = entrada.nextLine();
        
		System.out.print("Número de horas: ");
        String horas = entrada.nextLine();

        System.out.print("Su profesor: ");
        String profesor = entrada.nextLine();

        System.out.print("Puede convalidar la asignatura: ");
        boolean convalidar = entrada.nextBoolean();

        modulo1 = new Modulo(nombre, 0, profesor1, false);
        System.out.println("Módulo creado");
        
	}
	
	public static void mostrarModulo() {
        if (administrador1 != null) {
            System.out.println("\nDatos del módulo:");
            System.out.println(modulo1);
        } else {
            System.out.println("No hay módulo");
        }
	}
	
	static public void alumno() {
		entrada.nextLine();
		
		System.out.print("DNI: ");
	    String dni = entrada.nextLine();

	    System.out.print("Nombre: ");
	    String nombre = entrada.nextLine();

	    System.out.print("Apellidos: ");
	    String apellidos = entrada.nextLine();

	    System.out.println("Su salario será 0 por ser alumno ");

	    System.out.print("Fecha de nacimiento: ");
	    String fechaNacimiento = entrada.nextLine();

	    System.out.print("Sexo (hombre/mujer): ");
	    String auxgenero = entrada.nextLine();
	    
	    Sexo genero;
	    if (auxgenero.equals("hombre")) {
	        genero = Sexo.hombre;
	    } else if (auxgenero.equals("mujer")) {
	        genero = Sexo.mujer;
	    } else {
	        System.out.println("Sexo no válido, te pondré mujer entonces");
	        genero = Sexo.mujer;
	    }

	    System.out.print("¿Es repetidor? true/false: ");
	    boolean repetidor = entrada.nextBoolean();
	    entrada.nextLine();

	    // AÑADIMOS EL MÓDULO
	    Modulo[] modulosMatriculados;
	    modulosMatriculados = new Modulo[]{modulo1};

	    alumno1 = new Alumno(dni, nombre, apellidos, 0, fechaNacimiento, genero, repetidor, modulosMatriculados);
	    System.out.println("Alumno creado");
	}
	
	public static void mostrarAlumno() {
	    if (alumno1 != null) {
	        System.out.println("\nDatos del alumno:");
	        System.out.println(alumno1);
	    } else {
	        System.out.println("No hay alumno");
	    }
	}

}
