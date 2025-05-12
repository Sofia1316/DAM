// EJERCICIO 1; Crea un programa que insertando un número en un cuadro de formulario indique si es par o impar.
function apartado1() {
    let numero = document.getElementById("numero").value;
    let resultado = document.getElementById("resultado");

    if (isNaN(numero)) {
        resultado.textContent = "Por favor, introduce un número válido.";
    } else if (numero % 2 === 0) {
        resultado.textContent = `Es PAR.`;
    } else {
        resultado.textContent = `Es IMPAR.`;
    }
}

// EJERCICIO 2; Cambiar fondo de color
function apartado2(){
    document.body.style.background = "lightblue";
}

// EJERCICIO 3; añadir nombre al documento html
function apartado3(){
    document.getElementById("resultado2").innerHTML = "Sofía López";
}

/* EJERCICIO 4; Una ventana emergente pide el DNI. Realiza una compruebe si el DNI está bien 
formado y que si está bien escriba el valor del DNI en un div contenido dentro 
de ese div y sino muestre ERROR */
function apartado4(){
    let pregunta = document.getElementById("dni").value;
    let dni = /[0-9]{8}[A-Z]/; // también válido --> let dni = /^d{8}[A-Z]$/;

    if(dni.test(pregunta)){
        alert("Dni válido");
    } else {
        alert("Dni inválido");
    }
}
/* Crea un formulario con tres campos: precio, descuento, resultado y botón. 
Precio es el número que inserta el usuario, descuento es un número que debe ser del 0 al 100, 
si no está dentro de ese rango debe mostrar un mensaje de alerta y resultado es un campo del formulario que solo se puede leer y no editar. 
El resultado se muestra al dar al botón.*/
function apartado5() {
    let porcentaje = parseFloat(document.getElementById("descuento").value); 
    let precio = parseFloat(document.getElementById("precio").value);
    let resultado5 = document.getElementById("resultado5");

    // Verificar que el descuento esté en el rango correcto
    if (porcentaje > 100 || porcentaje < 0) {
        alert("El descuento debe ser entre 0 y 100");
        return;
    } 
    // Calcular el precio con el descuento aplicado
    let calculo1 = (porcentaje / 100) * precio;
    let calculo2 = precio - calculo1;

    // Mostrar el resultado en el campo de "resultado"
    resultado5.value = calculo2;
}

/* Crea un botón que inicie un contador empezando por el 1 y cada vez que se le da a ese botón se incrementa el tiempo, 
si es la segunda vez por dos, si es la tercera por 3 así sucesivamente… y otro botón que al darle inicia el contador otra vez a cero */
function apartado6() {
    let valor = 0;
    let veces = 0;

    document.getElementById("incrementar").addEventListener("click", function () {
        veces++;
        valor += veces;
        document.getElementById("contador").textContent = valor;
    });

    document.getElementById("reiniciar").addEventListener("click", function () {
        valor = 0;
        veces = 0;
        document.getElementById("contador").textContent = valor;
    });
}

/* Crea un ejercicio que cree un número aleatorio y lo muestre cada vez que le des a 
un botón que diga número aleatorio */
function apartado7() {
    let numero = Math.floor(Math.random() * 100) + 1; // Número entre 1 y 100
    let aleat = document.getElementById("numeroAleatorio");
    aleat.textContent = numero; // Mostrar el número generado
}

function apartado7b() {
    document.getElementById("numeroAleatorio").textContent = "-"; // Reiniciar el valor mostrado a "-"
}

/* Crea un reloj que haga una cuenta  atrás del número que le hayas insertado a 
través de un campo de formulario. */
function apartado8() {
    let segundos = parseInt(document.getElementById("tiempo").value);
    let mostrar = document.getElementById("mostrar");

    let intervalo = setInterval(function () {
        mostrar.textContent = "Tiempo: " + segundos;
        segundos--;

        if (segundos < 0) {
            clearInterval(intervalo);
            mostrar.textContent = "¡Tiempo terminado!";
        }
    }, 1000);
}

// Crea una tabla en HTML e intenta que dando un botón se relenen todas las celdas con números secuenciales.
function apartado9() {
    let celdas = document.querySelectorAll("#miTabla td");
    for (let i = 0; i < celdas.length; i++) {
        celdas[i].textContent = i + 1;
    }
}

// Crea una caja de texto que cambia de color dependiendo de qué tecla pulses. Así se ve rápidamente cómo funciona el evento keydown.
function apartado10(e) {
    let ap10 = document.getElementById("ap10");
    let tecla = e.key.toLowerCase();

    if (tecla === "r"){
        ap10.style.backgroundColor = "red";
    } else if (tecla === "g") {
        ap10.style.backgroundColor = "green";
    } else if (tecla === "b") {
        ap10.style.backgroundColor = "blue";
    } else if (tecla === "y"){
        ap10.style.backgroundColor = "yellow";
    } 
}

// 
// PARTE 1; generar número aleatorio a buscar
let numeroAdivinar = 0;
let intentos = 3;

function random(numero){
    let numAleatorio = Math.floor(Math.random() * (numero + 1));
    return numAleatorio;
}

function generarNumero(){
    numeroAdivinar = random(9);
    document.getElementById("numeroAdivinar").textContent = numeroAdivinar;
}

// PARTE 2; rellenar la matriz con números aleatorios
let matriz = [[0,0,0], [0,0,0], [0,0,0]];

function rellenarMatriz(){
    for(let i = 0; i < 3; i++){
        for(let j = 0; j < 3; j++){
            matriz[i][j] = random(9);
        } 
    }
}

function comprobarNumero(event){
    let i = parseInt(event.target.value[0]);
    let j = parseInt(event.target.value[1]);

    if(matriz[i][j] === numeroAdivinar){
        document.getElementById(event.target.value).textContent = matriz[i][j];
    } else {
        alert("No es el mismo número");
        console.log(matriz[i][j]);
        event.target.disabled = true;
    }

    document.getElementById("intentos").textContent = --intentos;

    if (intentos === 0) {
        alert("¡Has perdido!");
    }
}

// MAIN
function load() {
    let boton1 = document.getElementById("ap1");
    boton1.addEventListener("submit", function(event){
        event.preventDefault();
        apartado1();
    });

    let boton2 = document.getElementById("ap2");
    boton2.addEventListener("click", apartado2);

    let boton3 = document.getElementById("ap3");
    boton3.addEventListener("click", apartado3);

    let boton4 = document.getElementById("ap4");
    boton4.addEventListener("click", apartado4);

    let boton5 = document.getElementById("ap5");
    boton5.addEventListener("click", apartado5);

    apartado6();

    // APARTADO 7
    document.getElementById("ap7").addEventListener("click", apartado7); // Generar número aleatorio
    document.getElementById("ap7b").addEventListener("click", apartado7b); // Reiniciar número

    let boton8 = document.getElementById("ap8");
    boton8.addEventListener("click", apartado8);

    let boton9 = document.getElementById("ap9");
    boton9.addEventListener("click", apartado9);

    // APARTADO 10
    document.addEventListener("keydown", apartado10);

    // APARTADO 11
    generarNumero();
    rellenarMatriz();
    let botones = document.querySelectorAll("button");
    botones.forEach(boton => boton.addEventListener("click", comprobarNumero));
}

window.addEventListener("DOMContentLoaded", load);
