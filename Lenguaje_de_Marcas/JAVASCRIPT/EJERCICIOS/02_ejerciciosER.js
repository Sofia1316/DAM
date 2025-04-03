/*
Introducir una fecha en formato cadena mediante el método prompt() y en formato 
dd,mm, aaaa (por ejemplo, 23,01, 2008) y devolver en un cuadro de mensaje el 
número de días que han pasado hasta la fecha actual. Si la cadena introducida no 
se reconoce como fecha devolverá false.
*/ 
function ap1(){
    let usuario = prompt("Introduce una fecha en formato dd,mm,aaaa: "); // Pedir la fecha al usuario
    let fecha = /^\d{2},0[1-9]|1[1-9],\d{4}$/; // Expresión regular para la fecha

    if (fecha.test(usuario)){
        let [dia, mes, anio] = usuario.split(",").map(Number);
            // usuario.split(",") --> divide lo introducido con comas
            // .map(Number) --> convierte cada elemento que hay entre comas en un nº único
        
        // Crear el objeto de fecha
        let fechaIntroducida = new Date(anio, mes - 1, dia); // los meses empiezan en 0, por eso -1
        if (isNaN(fechaIntroducida.getTime())) { // si la fecha no es válida, devuelve NaN
            alert(false);
        } else {
            // Obtener la fecha actual
            let fechaActual = new Date();
            let dias = fechaActual - fechaIntroducida;
            // Convertir a días
            let dias2 = Math.round(dias / (1000 * 60 * 60 * 24)); // esta función redondea a la parte entera
            
            alert(`Han pasado ${dias2} días desde la fecha introducida.`);
        }
    } else { alert(false); }
}

/*
Introduce mediante un prompt un correo electrónico, si dicho correo electrónico es 
válido devolverá el número de letras que tiene el usuario. Si no determinará que es 
invalido y determinará dónde está el error si en el usuario o el dominio.  
*/
function ap2(){
    let email = prompt("Introduce un correo electrónico:");
    
    if (!email) { // para asegurar de que hay que introducir algo
        alert("No ingresaste ningún correo.");
        return;
    }
    // nuestro correo estará dividido en usuario + @ + dominio, por eso el split
    let partes = email.split("@");

    /*
    El split funciona de esta forma: cadena.split(separador, limite)
        - cadena: Es la cadena de texto que queremos dividir.
        - separador: El carácter o expresión regular que indica dónde dividir la cadena.
        - limite (opcional): Número máximo de divisiones que se realizarán.
    */
    
    // para comprobar que hay al menos un @ y no más
    if (partes.length !== 2) {
        alert("Falta o hay muchos @");
        return;
    }
    
    // Definimos las dos partes del correo divididas por el @
    let usuario = partes[0];
    let dominio = partes[1];
    
    // Qué cosas hay válidas en ambas partes
    let usuarioValido = /^[a-z-A-Z-0-9-.]+$/; // cadena alfanumérica con punto y lo que siga
    let dominioValido = /^[a-z-A-Z-0-9]+\.[a-zA-Z]{2,}$/; // cadena alfanumérica, un punto y al menos dos letras para el .es, .com...
    
    // en las dos primeras condiciones comprobamos que el usuario introduce de forma correcta lo que hemos definido como válido
    if (!usuarioValido.test(usuario)) {
        alert("Correo inválido: error en la parte del usuario.");
    } else if (!dominioValido.test(dominio)) {
        alert("Correo inválido: error en la parte del dominio.");
    } else { // en esta condición coge lo que hay antes del @ y al usar replace estamos eliminando todo lo que no sea una letra por un espacio en blanco (el \g significa global, por lo que se reemplazan todas las coincidencias en la cadena)
        let recuento = usuario.replace(/[^a-zA-Z]/g, "").length; // después de quedarnos solo con las letras, las contamos con .length
        alert(`Correo válido. El usuario tiene ${recuento} letras.`);
    }
}

/*
Introduce mediante el método prompt un teléfono de la siguiente forma 
91-234-12-23-23 y determinará si el teléfono es válido, si el teléfono es válido se mostrará de dónde viene la lamada según el prefijo. 
Si es inválido contará los caracteres y determinará si tiene más o menos de lo que debería tener.  
*/
function ap3(){
    let telefono = prompt("Introduce un número de teléfono con el formato 91-234-12-23-23:");
    
    if (!telefono) { // nos aseguramos de que introducimos algún dato
        alert("No ingresaste ningún número.");
        return;
    }
    
    let formatoValido = /^\d{2}-\d{3}-\d{2}-\d{2}-\d{2}$/;
    /*
    - ^	Indica el inicio de la cadena.
    - \d{2}	Dos dígitos numéricos (\d representa cualquier número del 0 al 9, y {2} indica que debe haber exactamente dos números).
    - - Guion obligatorio, debe aparecer en esta posición.
    - $	Indica el final de la cadena (evita que haya caracteres adicionales).
    */
    
    if (!formatoValido.test(telefono)) { // si lo que hemos metido no coincide con la forma válida que le hemos metido
        let caracteres = telefono.length; // calcula cuantos caracteres tiene el teléfono
        let diferencia = caracteres - 14; // resta 14 para quitar los números restantes ya que el formato son 14 nº
        
        if (diferencia > 0) { // si la diferencia de números es mayor a 0
            alert(`Número inválido: Tiene ${Math.abs(diferencia)} caracteres de más.`);
        } else { // o menor que cero
            alert(`Número inválido: Tiene ${Math.abs(diferencia)} caracteres de menos.`);
        }
        return;
    }
    
    // definimos que el teléfono que metemos en el prompt debe de estar dividido por guiones con el split
    let prefijo = telefono.split("-")[0];
    let region;
    // un switch para definir al menos un par de prefijos de españa
    switch (prefijo) {
        case "91":
            region = "Madrid";
            break;
        case "93":
            region = "Barcelona";
            break;
        case "95":
            region = "Sevilla o Málaga";
            break;
        case "96":
            region = "Valencia";
            break;
        default:
            region = "desconocida";
    }
    
    alert(`Llamada de ${region}`);
}

/*
Un programador ha publicado un desafío, que consiste en encontrar el número de 
veces que se encuentra una palabra en una frase, se tiene la siguiente oración de 
ejemplo: ‘Este es un ejemplo de texto con ejemplo de palabra repetida‘ la palabra a 
buscar es “ejemplo“. Crea un script que permita resolver este desafío. 
*/
function ap4(){
    let frase = prompt("Introduce una frase:");
    let palabraABuscar = "ejemplo"; // Palabra a buscar

    // Convertir la frase en un array de palabras
    let palabras = frase.toLowerCase().split(" ");

    // Contar cuántas veces aparece la palabra
    let contador = 0;
    for (let palabra of palabras) {
        if (palabra === palabraABuscar) {
            contador++;
        }
    }

    // Mostrar el resultado
    alert(`La palabra "${palabraABuscar}" aparece ${contador} veces en la frase.`);
}

/*
En un hackaton se ha publicado un reto, el cual consiste en buscar un conjunto de 
caracteres dentro de una oración y reemplazarlo por otro patrón. La frase de 
ejemplo es: “Lorem ipsum dolor sit amet, consectetur adipiscing elit“, la palabra que 
se debe de buscar es: “/ipsum/” y por la que se debe de reemplazar es: “dolor“. 
Crea un script que permita resolver este reto.
*/
function ap5(){
    let frase = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";  // La frase inicial
    let palabraABuscar = "ipsum";  // Palabra a buscar
    let palabraDeReemplazo = "dolor";  // Palabra con la que reemplazaremos

    // Reemplazar la palabra usando replace con expresión regular global
    let fraseReemplazada = frase.replace(new RegExp(palabraABuscar, "g"), palabraDeReemplazo);

    // Mostrar el resultado
    alert(`Frase original: ${frase}`);
    alert(`Frase con reemplazo: ${fraseReemplazada}`);
}

/*
La empresa developer S.A. de C.V. requiere que se pueda validar si una contraseña 
dada contiene un letra mayúscula, tiene un número y una letra minúscula. Crea un 
script donde se utilice una expresión regular para solventar este requerimiento.
*/
function ap6(){
    let contraseña = prompt("Introduce tu contraseña:");

    /*
    - (?=.*[a-z]): Asegura que la contraseña tenga al menos una letra minúscula (a-z).
    - (?=.*[A-Z]): Asegura que la contraseña tenga al menos una letra mayúscula (A-Z).
    - (?=.*\d): Asegura que la contraseña tenga al menos un número (0-9).
    - .+: Esto asegura que la contraseña tenga al menos un carácter en total.
    */
    let expresionRegular = /^(?=.*[a-z])(?=.*[A-Z])(?=.*\d).+$/;

    // Validar la contraseña con la expresión regular
    if (expresionRegular.test(contraseña)) {
        alert("Contraseña válida.");
    } else {
        alert("Contraseña inválida. Debe contener al menos una letra mayúscula, una letra minúscula y un número.");
    }
}

/*
Leer una cadena de texto mediante el método prompt() y generar un array con las 
palabras que contiene. Posteriormente, mostrar la siguiente información: 
    a. Número de palabras 
    b. Primera palabra y última palabra 
    c. Las palabras colocadas en orden inverso 
    d. Las palabras ordenadas de la a la z 
    e. Las palabras ordenadas de la z a la a 
    f. Un mensaje indicando si la frase es un palíndromo 
*/
function ap7(){
    let palabras = prompt("Introduce una cadena de texto: ");
    let array = palabras.split(" ");

    // APARTADO 1
    document.writeln("<h4>APARTADO 1 EJERCICIO 7</h4>");
    let contador = array.length; // contamos su longuitud directamente porque las palabras ya se han separado con el split anterior
    document.writeln("El número de palabras es de " + contador);
    
    // APARTADO 2
    document.writeln("<h4>APARTADO 2 EJERCICIO 7</h4>");
    let inicio = array[0]; 
    let final = array[array.length - 1]; 
    document.writeln("Primera palabra: " + inicio + "<br>");
    document.writeln("Última palabra: " + final);

    // APARTADO 3
    document.writeln("<h4>APARTADO 3 EJERCICIO 7</h4>");
    let resultado = "";

    for(let i = array.length - 1; i >= 0; i++){
        resultado += array[i] + " ";
        document.writeln("Palabras invertidas: " + resultado);
    }

    // APARTADO 4

    // APARTADO 5

    // APARTADO 6

    
}

function load(){
    /*ap1();
    ap2();
    ap3();
    ap4();
    ap5();
    ap6();*/
    ap7();
}
window.addEventListener("DOMContentLoaded", load, false);