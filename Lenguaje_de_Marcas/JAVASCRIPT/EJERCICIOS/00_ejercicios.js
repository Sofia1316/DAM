// EJERCICIOS CON FUNCIONES

// Escribe un programa de una sola línea que haga que aparezca en la pantalla un alert que diga “Hello World”.
function Ejercicio1(){
    alert("Hola mundo");
}

// Escribe un programa de una sola línea que escriba en la pantalla un texto que diga “Hello World” (document.write).
function Ejercicio2(){
    document.writeln("Hello World ");
    document.writeln("Hello World <br>");
}

// Escribe un programa de una sola línea que escriba en la pantalla el resultado de sumar 3 + 5.
function Ejercicio3(){
    let a = 3;
    let b = 5;
    let resultado = a + b;
    document.writeln("La suma es " + resultado + "<br>");
}

// Escribe un programa de dos líneas que pida el nombre del usuario con un prompt y escriba un texto que diga “Hola nombreUsuario”
function Ejercicio4(){
    let nombre = prompt("Dame un nombre de usuario ");
    alert("Hola " + nombre);
}

// Escribe un programa de tres líneas que pida un número, pida otro número y escriba el resultado de sumar estos dos números.
function Ejercicio5(){
    let n1 = prompt("Ej5: Dame un número ");
    let n2 = prompt("Ej5: Dame un número ");
    let resultado2 = parseInt(n1) + parseInt(n2);
    alert(resultado2);
}

// Escribe un programa que pida dos números y escriba en la pantalla cual es el mayor.
function Ejercicio6(){
    let n3 = prompt("Ej6: Dame un número ");
    let n4 = prompt("Ej6: Dame un número ");

    if(n3 > n4){
        document.writeln(n3 + " es mayor Ej6 <br>");
    } else {
        document.writeln(n4 + " es mayor Ej6 <br>");
    }
}

// Escribe un programa que pida 3 números y escriba en la pantalla es mayor de los tres.
function Ejercicio7(){
    let n5 = prompt("Ej7: Dame un número ");
    let n6 = prompt("Ej7: Dame un número ");
    let n7 = prompt("Ej7: Dame un número ");

    if(n5 > n6){
        document.writeln(n5 + " es mayor Ej7<br>");
    } else if (n6 > n7) {
        document.writeln(n6 + " es mayor Ej7<br>");
    } else {
        document.writeln(n7 + " es mayor Ej7<br>");
    }
}

// Escribe un programa que pida un número y diga si es divisible por 2
function Ejercicio8(){
    let num = parseInt(prompt("Ej8: Dame un número "));
    if(num % 2 == 0){
        /*console.log*/ document.writeln("Es divisible por 2");
    } else {
        /*console.log*/ document.writeln("No es divisible por 2");
    }
}

// Escribe un programa que pida una frase y escriba cuantas veces aparece la letra a

// OPCIÓN 1
function Ejercicio9(){
    let frase = prompt("Ej9: Escribe una frase ");
    let contador = 0;

    for(let i=0; i<frase.length; i++){
        if(frase[i].toLowerCase()==='a'){ // si tengo una mayúscula, me la cambie a minúscula
            contador++;
        }
    }
}

// OPCIÓN 2
function Ejercicio9B(){
    // Solicitar la frase al usuario
    let frase = prompt("Introduce una frase:");
    // Contar las veces que aparece la letra 'a' usando split (este se encarga de partir la frase en el caracter que le pides y devuelve un array con el número de separaciones)
    let contarConSplit = frase.split('a').length - 1;

    /*
    let contarConSplit = frase.split('a', 3).length - 1;
    solo te devuelve las 3 primeras divisiones, es decir, las 3 primeras a
    */

    // Contar las veces que aparece la letra 'a' usando includes
    let contarConIncludes = [...frase].filter(letra => letra.toLowerCase() === 'a').length;

    document.writeln(`La letra 'a' aparece ${contarConSplit} veces usando split.<br>`);
    document.writeln(`La letra 'a' aparece ${contarConIncludes} veces usando includes.<br>`);    
}

// OPCIÓN 3
function Ejercicio9C(){
    let frase2="Hola que tal";
    let contador = 0;

    for(let char of frase2){
        if(char.toLowerCase()==='a'){ // si tengo una mayúscula, me la cambie a minúscula
            contador++;
        }
    }  
}

// Escribe un programa que pida una frase y escriba las vocales que aparecen y cuantas son
function Ejercicio10y11(){
    let frase3=prompt("Escribe una frase: ");
    let vocales ="aeiouAEIOU";
    let vocalesEncontradas="";
    let contador = 0;

    for(let char of frase3){ // recorre todas las letras de la palabra
        if(vocales.includes(char)){ // una vez seleccionada la letra, comprueba que es una vocal, por lo que en el caso de poner frase.include(vocales), no devuelve la letra, lo que devuelve es un true o false
            if(!vocalesEncontradas.includes(char)){ // este se encarga de no repetir vocales, simplemente te pone las que hay
              vocalesEncontradas += char;  
            }
        contador++;
        }
    }
    document.writeln("Las vocales son: " + vocalesEncontradas + "<br>");
    document.writeln("El número de vocales son: " + contador);
}

// Escribe un programa que pida una frase y escriba cuántas de las letras que tiene son vocales
function Ejercicio12(){
    let frase=prompt("Escribe una frase: ");
    let vocales ="aeiou";
    let vocalesEncontradas={a:0,e:0,i:0,o:0,u:0}; // para acceder al array, debe ser a través de vocales

    for(let char of frase){
        if(vocales.includes(char.toLocaleLowerCase())){
            vocalesEncontradas[char.toLocaleLowerCase()++];
        }
    }
    document.writeln("Vocales " + JSON.stringify(vocalesEncontradas));
}
//Escribe un programa que pida un número y nos diga si es divisible por 2, 3, 5 o 7 (sólo hay que comprobar si lo es por uno de los cuatro)
// Añadir al ejercicio anterior que nos diga por cuál de los cuatro es divisible (hay que decir todos por los que es divisible)
function Ejercicio13y14(){
    let num=parseInt(prompt("Escribeme un número: "));
    let divisibles = []; // los array dinámicos son corchetes, pero si sabes lo que va a tener, son llaves
    if(num % 2 === 0) divisibles.push("2"); // push sirve para añadir elementos a un array y el pop es el que elimina el último valor del array
    if(num % 3 === 0) divisibles.push("3");
    if(num % 5 === 0) divisibles.push("5");
    if(num % 7 === 0) divisibles.push("7");

    if(divisibles.length>0){
        document.writeln(divisibles.join(", "));
    } else {
        document.writeln("No es divisible");
    }
}

// Escribir un programa que escriba en pantalla los divisores de un número dado
function Ejercicio15(){
    let numero = parseInt(prompt("Introduce un número: ")); // Solicita al usuario un número
    let divisores = []; // Arreglo para almacenar los divisores

    // Bucle para encontrar divisores
    for (let i = 1; i <= numero; i++) {
        if (numero % i === 0) { // Verifica si i es divisor de numero
            divisores.push(i); // Si lo es, lo agrega al arreglo
        }
    }

    // Muestra los divisores en pantalla
    document.writeln("Los divisores de " + numero + " son: " + divisores.join(", "));
}

// Escribir un programa que escriba en pantalla los divisores comunes de dos números dados
function Ejercicio16(){
    let numero1 = parseInt(prompt("Introduce el primer número: "));
    let numero2 = parseInt(prompt("Introduce el segundo número: "));
    
    let divisoresNumero1 = []; // Arreglo para los divisores del primer número
    let divisoresNumero2 = []; // Arreglo para los divisores del segundo número
    let divisoresComunes = []; // Arreglo para los divisores comunes

    // Encontrar los divisores del primer número
    for (let i = 1; i <= numero1; i++) {
        if (numero1 % i === 0) {
            divisoresNumero1.push(i);
        }
    }

    // Encontrar los divisores del segundo número
    for (let i = 1; i <= numero2; i++) {
        if (numero2 % i === 0) {
            divisoresNumero2.push(i);
        }
    }

    // Encontrar los divisores comunes
    for (let divisor of divisoresNumero1) {
        if (divisoresNumero2.includes(divisor)) {
            divisoresComunes.push(divisor);
        }
    }

    // Mostrar los divisores comunes
    document.writeln("Los divisores comunes de " + numero1 + " y " + numero2 + " son: " + divisoresComunes.join(", "));
}

// Escribir un programa que nos diga si un número dado es primo (no es divisible por ninguno otro número que no sea él mismo o la unidad)
function Ejercicio17(){
    let numero = parseInt(prompt("Introduce un número: ")); // Solicita al usuario un número

    // Verifica si el número es menor o igual a 1
    if (numero <= 1) {
        document.writeln(numero + " no es un número primo.");
        return;
    }

    // Verifica si el número es divisible por algún número entre 2 y la raíz cuadrada de 'numero'
    for (let i = 2; i <= Math.sqrt(numero); i++) {
        if (numero % i === 0) {
            document.writeln(numero + " no es un número primo.");
            return;
        }
    }

    // Si no fue divisible por ninguno, es un número primo
    document.writeln(numero + " es un número primo.");
}

// Función que llama a todas las funciones y funciona como el 
function carga(){
    Ejercicio1();
    Ejercicio2();
    Ejercicio3();
    Ejercicio4();
    Ejercicio5();
    Ejercicio6();
    Ejercicio7();
    Ejercicio8();
    Ejercicio9();
    Ejercicio9B();
    Ejercicio9C();
    Ejercicio10y11();
    Ejercicio12();
    Ejercicio13y14();
    Ejercicio15();
    Ejercicio16();
    Ejercicio17();
}

window.addEventListener("DOMContentLoaded", carga, false);
