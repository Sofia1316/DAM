// PARTE 1; generar número aleatorio a buscar
let numeroAdivinar = 0;
let veces = 0;
let intentos = 3;

function random(numero){
    let numAleatorio = Math.floor(Math.random() * (numero + 1));
    return numAleatorio;
}

function generarNumero(){
    numeroAdivinar = random(9);
    document.getElementById("numeroAdivinar").textContent = numeroAdivinar;
    document.getElementById("veces").textContent = veces;
}

// PARTE 2; rellenar la matriz con números aleatorios
let matriz = [[0,0,0], [0,0,0], [0,0,0]];

function rellenarMatriz(){
    veces = 0;

    for(let i = 0; i < 3; i++){
        for(let j = 0; j < 3; j++){
            matriz[i][j] = random(9);
            if(matriz[i][j] === numeroAdivinar){
                veces++;
            }
        } 
    }

    // No hay ningún número como el de adivinar en la matriz
    if(veces == 0){
        matriz[random(2)][random(2)] = numeroAdivinar;
        veces = 1;
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

function load(){
    generarNumero();
    rellenarMatriz();

    // Asociar eventos a los botones
    let botones = document.querySelectorAll("button");
    botones.forEach(boton => boton.addEventListener("click", comprobarNumero));
}

window.addEventListener("DOMContentLoaded", load, false);
