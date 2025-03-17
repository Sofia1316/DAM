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


// Función que llama a todas las funciones y funciona como el 
function carga(){
    /*Ejercicio1();
    Ejercicio2();
    Ejercicio3();
    Ejercicio4();
    Ejercicio5();
    Ejercicio6();
    Ejercicio7();
    Ejercicio8();*/
    Ejercicio9();
}

window.addEventListener("DOMContentLoaded", carga, false);