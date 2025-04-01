/*
OPERADORES ARITMÉTICOS

1. + suma
2. - resta
3. * multiplicación
4. / división
5. % resto
*/

public class UsoDeOperadoresAritmeticos {
    public static void main(String[] args) {
        int x;
        x = 100;

        System.out.println(x + " " + (x + 5) + " " + (x - 5));
        System.out.println((x * 5) + " " + (x / 5) + " " + (x % 5));
    }
}

/*
OPERADORES UNARIOS

1. ++ incremento
2. -- decremento
3. ! negación lógica (cambiar un valor boolean de true a false o viceversa)
*/

public class OperadoresUnarios {
    public static void main(String[] args) {
        int x = 5;
        boolean bandera = true;

        // 1. Incremento
        x++; // Aumenta x en 1
        System.out.println("Incremento: " + x); // Imprime 6

        // 2. Decremento
        x--; // Disminuye x en 1
        System.out.println("Decremento: " + x); // Imprime 5

        // 3. Negación lógica
        bandera = !bandera; // Cambia el valor de bandera de true a false
        System.out.println("Negación lógica: " + bandera); // Imprime false
    }
}

/*
OPERADORES RELACIONALES

1. == igual
2. != distinto
3. <, >, <=, >= mayor o menor
*/

public class OperadoresRelacionales {
    public static void main(String[] args) {
        int a = 10;
        int b = 5;
        boolean resultado;

        // 1. Igual
        resultado = (a == b); 
        System.out.println("a == b: " + resultado); // Imprime false

        // 2. Distinto
        resultado = (a != b); 
        System.out.println("a != b: " + resultado); // Imprime true

        // 3. Mayor que
        resultado = (a > b); 
        System.out.println("a > b: " + resultado); // Imprime true

        // 4. Menor que
        resultado = (a < b); 
        System.out.println("a < b: " + resultado); // Imprime false

        // 5. Mayor o igual que
        resultado = (a >= b); 
        System.out.println("a >= b: " + resultado); // Imprime true

        // 6. Menor o igual que
        resultado = (a <= b); 
        System.out.println("a <= b: " + resultado); // Imprime false
    }
}

/*
OPERADORES LÓGICOS

1. && and
2. || or
*/

public class OperadoresLogicos {
    public static void main(String[] args) {
        boolean x = true;
        boolean y = false;

        // 1. AND lógico
        System.out.println("x && y: " + (x && y)); // Imprime false

        // 2. OR lógico
        System.out.println("x || y: " + (x || y)); // Imprime true
    }
}

/*
OPERADORES DE ASIGNACIÓN

1. =: Asignación simple 
2. +=: Suma y asigna 
3. -=: Resta y asigna 
4. *=: Multiplica y asigna 
5. /=: Divide y asigna 
6. %=: Módulo y asigna
*/

public class OperadoresAsignacion {
    public static void main(String[] args) {
        int x = 10;
        int y = 5;

        // 1. Asignación simple
        x = y; 
        System.out.println("x = y: " + x); // Imprime 5

        // 2. Suma y asigna
        x += 3; 
        System.out.println("x += 3: " + x); // Imprime 8

        // 3. Resta y asigna
        x -= 2; 
        System.out.println("x -= 2: " + x); // Imprime 6

        // 4. Multiplica y asigna
        x *= 2; 
        System.out.println("x *= 2: " + x); // Imprime 12

        // 5. Divide y asigna
        x /= 4; 
        System.out.println("x /= 4: " + x); // Imprime 3

        // 6. Módulo y asigna
        x %= 2; 
        System.out.println("x %= 2: " + x); // Imprime 1
    }
}
