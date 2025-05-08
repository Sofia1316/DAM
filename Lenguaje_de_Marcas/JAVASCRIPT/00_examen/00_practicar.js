//  Escribe un programa de una sola línea que haga que aparezca en la pantalla un alert que diga “Hello World”.
function ej1(){
    alert("Hola");
}
// Escribe un programa de una sola línea que escriba en la pantalla un texto que diga “Hello World” (document.write).
function ej2(){
    document.writeln("Hola");
}
// Escribe un programa de una sola línea que escriba en la pantalla el resultado de sumar 3 + 5.
function ej3(){
    document.writeln(3 + 5);
}
// Escribe un programa de dos líneas que pida el nombre del usuario con un prompt y escriba un texto que diga “Hola nombreUsuario”
function ej4(){
    nombre = prompt("Dime tu nombre");
    document.writeln("Hola " + nombre);
}
// Escribe un programa de tres líneas que pida un número, pida otro número y escriba el resultado de sumar estos dos números.
function ej5(){
    let a = prompt("Dime el nº 1: ");
    let b = prompt("Dime el nº 2: ");
    let c = prompt("Dime el nº 3: ");
    let suma = parseInt(a) + parseInt(b) + parseInt(c); // debo de poner el parse int porque lo que escribo en el prompt lo interpreta como string
    document.writeln("La suma es: " + suma);
}
// Escribe un programa que pida dos números y escriba en la pantalla cual es el mayor.
function ej6() {
    let num1 = prompt("Introduce el primer número:");
    let num2 = prompt("Introduce el segundo número:");

    if (num1 > num2) {
        document.writeln("El mayor es: " + num1);
    } else if (num2 > num1) {
        document.writeln("El mayor es: " + num2);
    } else {
        document.writeln("Ambos números son iguales.");
    }
}
// Escribe un programa que pida 3 números y escriba en la pantalla el mayor de los tres.
function ej7() {
    let a = prompt("Introduce el primer número:");
    let b = prompt("Introduce el segundo número:");
    let c = prompt("Introduce el tercer número:");

    let mayor = a;

    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;

    document.writeln("El mayor de los tres es: " + mayor);
}
// Escribe un programa que pida un número y diga si es divisible por 2
function ej8() {
    let numero = parseInt(prompt("Introduce un número:"));
    
    if (numero % 2 === 0) {
        document.writeln("El número " + numero + " es divisible por 2");
    } else {
        document.writeln("El número " + numero + " no es divisible por 2");
    }
}
// Escribe un programa que pida una frase y escriba cuantas veces aparece la letra a
function ej9(){
    let frase = prompt("Escribe una frase: ");
    let contarConSplit = frase.split('a').length - 1;
    document.writeln(`La letra 'a' aparece ${contarConSplit} veces usando split`);
}
// Escribe un programa que pida una frase y escriba las vocales que aparecen (y cuántas son en total)
function ej10(){
    let frase = prompt("Escribe una frase");
    let vocales = "AEIOUaeiou";
    let encontrar= "";
    let contador = 0;

    for(let char of frase){
        if(vocales.includes(char)){
            if(!encontrar.includes(char)){
                encontrar += char;
            }
            contador++;
        }
    }

    document.writeln("Vocales encontradas: " + encontrar + "<br>");
    document.writeln("Número de vocales: " + contador);
}
// Escribe un programa que pida una frase y escriba cuántas veces aparecen cada una de las vocales
function ej11(){
    let frase = prompt("Escribe una frase: ");
    let vocales = "aeiou";
    let array = {a:0, e:0, i:0, o:0, u:0}

    for(let char of frase){ // recorro la frase
        if(vocales.includes(char)){ // si hay vocales en esa frase
            array[char]++; // aumento el contador del array con la vocal correspondiente
        }
    }
    document.writeln("Vocales: <br>");
    for(let char in array){ // recorro el array
        document.writeln(char + ":" + array[char]) // imprimo las vocales en función del arrar y sus contadores
    }
}
// Escribe un programa que pida un número y nos diga si es divisible por 2, 3, 5 o 7 (hay que decir todos por los que es divisible)
function ej12(){
    let numero = prompt("Introduce un número: ");
    let resultado = "";

    if (numero % 2 === 0) resultado += "2 ";
    if (numero % 3 === 0) resultado += "3 ";
    if (numero % 5 === 0) resultado += "5 ";
    if (numero % 7 === 0) resultado += "7 ";

    if (resultado !== "") {
        alert(`El número ${numero} es divisible por: ${resultado}`);
    } else {
        alert(`El número ${numero} no es divisible por 2, 3, 5 ni 7`);
    }
}

// Escribir un programa que nos diga si un número dado es primo (no es divisible por ninguno otro número que no sea él mismo o la unidad)
function ej13(){
    let numero = parseInt(prompt("Introduce un número para saber si es primo: "));
    let primo = true;

    if(numero < 2){
        document.writeln("No es un número primo, introduce un nº mayor de 1 (no incluido)");
    }

    for(let i = 2; i < numero; i++){
        if(numero % i == 0){
            primo = false;
            break;
        }
    }

    if(primo){
        alert("Es primo");
    } else { 
        alert("No es primo"); 
    }
}

function load(){
    let boton1 = document.getElementById("boton");
    boton1.addEventListener("click", ej1, false);

    let boton2 = document.getElementById("boton2");
    boton2.addEventListener("click", ej2, false);

    let boton3 = document.getElementById("boton3");
    boton3.addEventListener("click", ej3, false);

    let boton4 = document.getElementById("boton4");
    boton4.addEventListener("click", ej4, false);

    let boton5 = document.getElementById("boton5");
    boton5.addEventListener("click", ej5, false);

    let boton6 = document.getElementById("boton6");
    boton6.addEventListener("click", ej6, false);

    let boton7 = document.getElementById("boton7");
    boton7.addEventListener("click", ej7, false);

    let boton8 = document.getElementById("boton8");
    boton8.addEventListener("click", ej8, false);

    let boton9 = document.getElementById("boton9");
    boton9.addEventListener("click", ej9, false);

    let boton10 = document.getElementById("boton10");
    boton10.addEventListener("click", ej10, false);

    let boton11 = document.getElementById("boton11");
    boton11.addEventListener("click", ej11, false);

    let boton12 = document.getElementById("boton12");
    boton12.addEventListener("click", ej12, false);

    let boton13 = document.getElementById("boton13");
    boton13.addEventListener("click", ej13, false);
}

window.addEventListener("DOMContentLoaded", load, false);