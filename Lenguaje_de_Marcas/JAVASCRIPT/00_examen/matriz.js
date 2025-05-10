let matriz = [
    [0,1],
    [0,0]
];

function random(numero){
    return Math.floor(Math.random() * (numero+1));
}

function generarMatriz(){
     // Reiniciar matriz a ceros
    matriz = [
        [0, 0],
        [0, 0]
    ];

    // Generar posición aleatoria para el barco
    let fila = random(1);    // 0 o 1
    let columna = random(1); // 0 o 1

    matriz[fila][columna] = 1;
}

function comprobar(event){
    let valorEnviado = event.target.value;
    let j = valorEnviado[0];
    let i = valorEnviado[1];

    if(matriz[i][j] === 1){
        document.getElementById(valorEnviado).textContent = "Barco";
    } else {
        alert("Has fallado");
    }
}

function principal(){
    generarMatriz();

    let botones = document.querySelectorAll(".boton");
    botones.forEach(boton => boton.addEventListener("click", comprobar));

}
window.addEventListener("DOMContentLoaded", principal);