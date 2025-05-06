// DEFINIMOS FILAS Y COLUMNAS
let filas = 8;
let columnas = 8;

// CREAMOS LOS ARRAY
let Enemigo = new Array(filas);
let disparado = new Array(filas);

// INICIALIZAR LA MATRIZ A 0
for (let i = 0; i < filas; i++) {
    Enemigo[i] = new Array(columnas);
    disparado[i] = new Array(columnas);

    for (let j = 0; j < columnas; j++) {
        Enemigo[i][j] = ""; 
        disparado[i][j] = 0; 
    }
}

// TABLERO JUGADOR
function Tjugador() {
    let tabla = document.getElementById("jugador");
    for (let i = 0; i < filas; i++) {
        let fila = "<tr>";
        for (let j = 0; j < columnas; j++) {
            fila += "<td><input maxlength='1'></td>"; // para que solo se pueda escribir un caracter por celda
        }
        fila += "</tr>";
        tabla.innerHTML += fila;  // Añadir la fila a la tabla
    }
}

// BOTONES DEL ENEMIGO PARA MARCAR LOS BARCOS
function botonesEnemigo() {
    let tabla = document.getElementById("enemigo");
    for (let i = 0; i < filas; i++) {
        let fila = "<tr>";
        for (let j = 0; j < columnas; j++) {
            // Creamos un botón con un ID único en función de las coordenadas
            fila += `<td><button id="boton-${i}-${j}" onclick="disparar(${i}, ${j})">?</button></td>`;
        }
        fila += "</tr>";
        tabla.innerHTML += fila;  // Añadir la fila a la tabla
    }
}

// BOTONES
function disparar(i, j) {
    let boton = document.getElementById(`boton-${i}-${j}`); // para que se tenga cada botón de forma independiente
    
    if (Enemigo[i][j] === "x") {
        boton.style.backgroundColor = "red";
        alert("Tocado");
    } else {
        boton.style.backgroundColor = "lightblue"; 
        alert("Agua");
    }
}

// BARCOS EN LOS BOTONES
function colocarBarcosEnemigo() {
    /*let barcos = [
        {tamano: 1, cantidad: 4}, 
        {tamano: 2, cantidad: 3}, 
        {tamano: 3, cantidad: 2}, 
        {tamano: 4, cantidad: 1} ];*/
    let colocados = 0;

    // Llenamos el tablero con barcos aleatorios
    while (colocados < 8) {
        let fila = Math.floor(Math.random() * filas);
        let col = Math.floor(Math.random() * columnas);

        if (Enemigo[fila][col] === "") { // Si la casilla está vacía
            Enemigo[fila][col] = "x"; // Colocamos un barco
            colocados++;
        }
    }
}

// Cargar los elementos del juego
function load() {
    Tjugador();
    botonesEnemigo();
    colocarBarcosEnemigo();
}

// Iniciar el juego cuando el DOM esté completamente cargado
window.addEventListener("DOMContentLoaded", load, false);
