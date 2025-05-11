/* Crea una tabla 3x3 dónde se relene de letras aleatorias del abecedario, se generará 
un número y una letra y hay que darle a  las letras que son tantas veces como 
indique el número. Hay que asegurarse que el número de letra está en la matriz */

// PARTE 1; generar letra del abecedario aleatoria
letraAdivinar = '';
let abecedario = "abcdefghijklmnñopqrstuvwxyz".split('');
let vecesObjetivo = 0;
let contadorClick = 0;

function random(abecedario){
    return Math.floor(Math.random() * abecedario.length);
}

function generarLetra(){
    letraAdivinar = abecedario[random(abecedario)];
    document.getElementById("letra").textContent = letraAdivinar;

    // Calcular cuántas veces aparece esa letra en la matriz
    vecesObjetivo = 0;
    for(let i = 0; i < 3; i++){
        for(let j = 0; j < 3; j++){
            if(matriz[i][j] === letraAdivinar){
                vecesObjetivo++;
            }
        }
    }
    document.getElementById("num").textContent = vecesObjetivo;
    contadorClick = 0;
}

// PARTE 2; rellenar la matriz
let matriz = [[0,0,0],[0,0,0],[0,0,0]];

function rellenarMatriz(){
    for(let i = 0; i < 3; i++){
        for(let j = 0; j < 3; j++){
            matriz[i][j] = abecedario[random(abecedario)];
        } 
    }
}

function comprobarLetra(event){
    let i = parseInt(event.target.value[0]);
    let j = parseInt(event.target.value[1]);

    if(matriz[i][j] === letraAdivinar){
        event.target.disabled = true;
        contadorClick++;

        if(contadorClick === vecesObjetivo){
            alert("¡Has ganado!");
        }

    } else {
        alert("No es la misma letra");
        event.target.disabled = true;
    }

}

/*Crea un contador de colores, los colores son los siguientes 0: azul, 1: amari lo; 2: verde, 
3 : naranja, 4: rosa, 5: morado, 6: marron, 7: cyan, 8: turquesa, 9; gris. Se tiene un 
contador que va cambiando solo y cuando las terminaciones coinciden con los 
números de la lista el fondo cambia de color. Los colores paran cuando se da al 
boton stop. */
let contador = 0;
let intervalo;
const colores = [
  "blue",       // 0: azul
  "yellow",     // 1: amarillo
  "green",      // 2: verde
  "orange",     // 3: naranja
  "pink",       // 4: rosa
  "purple",     // 5: morado
  "brown",      // 6: marrón
  "cyan",       // 7: cyan
  "turquoise",  // 8: turquesa
  "gray"        // 9: gris
];

function inicio() {
  if (intervalo) return; // Evita múltiples intervalos a la vez

  intervalo = setInterval(() => {
    contador++;
    document.getElementById("contador").textContent = contador;
    let ultimoDigito = contador % 10;
    document.body.style.backgroundColor = colores[ultimoDigito];
  }, 500); // cambia cada 0.5 segundos
}

function detener() {
  clearInterval(intervalo);
  intervalo = null; // para que el intervalo después de pararlo, puedas volver a iniciarlo
}

/*Crea un contador que muestre la serie de Fibonacci. Sabiendo que Fibonacci es la 
suma de los números anteriores, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 */
function fibonacci(){
    let a = 0;
    let b = 1;
    let siguiente = a + b;
    let serie = "0, 1";
    let limite = parseInt(document.getElementById("fibo").value);

    while(siguiente <= limite){
        serie += ", " + siguiente;
        a = b;
        b = siguiente;
        siguiente = a + b;
    }
    document.getElementById("respuesta").textContent = "Serie de Fibonacci " + serie;
}

/* Crea un formulario con los siguientes campos: 

Nombre: 
El nombre debe ser solo una cadena de caracteres que admite mayúsculas y minúsculas pero no números (Controlalo con una expresión 
regular). Con el número se sacará el primer número del color de fondo, se multiplica la longitud del nombre por 25, si este excede el número 255 
que es el máximo, se da la vuelta hasta obtener un número menor de 255. Por ejemplo, Beatriz tiene siete letras por lo que el número de la R 
es 7x25=175 como es menor de 255 vale. Pero Beatriz María Rosa tiene 18, 18x25=450 se excede por lo que restamos 450-255=195 en el caso de que 
siguiera siendo mayor de 255, volveríamos a restar.  

Edad: 
se debe controlar que es un número entre el 0 y 100. Se multiplica por 
100, y se utiliza el mismo razonamiento que con el nombre para halar el color. 

El último punto son botones radio con caras.

Para calcular el último dato se dependiendo del estado si es triste se pone 255, si es 
bien se divide entre 4, si es contento entre 2, si es feliz a 0.  
Cuando se le da al botón enviar el fondo del formulario cambia de color. 
*/
function nombre(){
    let nomUser = document.getElementById("nom").value;
    let nom2 = /[A-Za-z]/;

    if(nom2.test(nomUser)){
         do {
            let longitud = nomUser.length;
            let cuenta = longitud * 25;
            if(cuenta < 255){
                alert("Nombre válido");
            } else {
                cuenta - 255;
            }
        } while (cuenta < 255);
    } else {
       alert("Nombre no válido");
    }
    return cuenta;
}

function edad(){
    let numUser = parseInt(document.getElementById("ed").value);
    let num2 = /^(100|[1-9]?[0-9])$/; // inicio, 100 o un número del 1 al 9 (opcional), y un número del 1 al 9, final de cadena

    if(num2.test(numUser)){
        do{
            let cuenta2 = numUser * 100;
            if(cuenta2 < 255){
                alert("Número válido");
            } else {
                cuenta2 - 255;
            }
        } while (cuenta2 < 255);
    } else {
        alert("El número debe de ser entre 0 y 100");
    }
    return cuenta2;
}

function caritas(){
    const estado = document.querySelector('input[name="estado"]:checked');
    const numero = parseFloat(document.getElementById("numeroBase").value);
    let resultado;

    if (!estado || isNaN(numero)) {
        alert("Selecciona un estado y un número válido.");
        return;
    }

    switch (estado.value) {
        case "triste":
            resultado = 255;
            break;
        case "bien":
            resultado = numero / 4;
            break;
        case "contento":
            resultado = numero / 2;
            break;
        case "feliz":
            resultado = 0;
            break;
    }

    document.getElementById("resultado").textContent = resultado;
    return resultado;
}

function color() {
    let r = nombre();
    let g = edad();
    let b = caritas();

    let colorFinal = "rgb(" + r + "," + g + "," + b + ")";
    document.body.style.backgroundColor = colorFinal;
}

// MAIN
function load() {

    // APARTADO 12
    generarLetra();
    rellenarMatriz();

    let botones = document.querySelectorAll(".boton");
    botones.forEach(boton => {
        boton.addEventListener("click", comprobarLetra);
    });

    // APARTADO 13
    let boton13 = document.getElementById("inicio")
    boton13.addEventListener("click", inicio);
    let boton13b = document.getElementById("detener")
    boton13b.addEventListener("click", detener);

    // APARTADO 14
    let boton14 = document.getElementById("ap14");
    boton14.addEventListener("click", fibonacci);

    // APARTADO 15
    document.getElementById("enviar").addEventListener("click", function(event) {
        color();
    });
}

window.addEventListener("DOMContentLoaded", load);