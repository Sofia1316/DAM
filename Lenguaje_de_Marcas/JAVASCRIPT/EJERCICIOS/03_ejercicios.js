function tiempo(){
    
}

function cuentaAtras(){
    let cuenta;
    clearInterval(cuenta); // es como una forma de inicializar la variable

    let valorTiempo = document.getElementById("tiempo").value;
    let contador = document.getElementById("contador");

    cuenta=setInterval(tiempo, 1000);
}

function load(){
    // EJERCICIO 1
    let botonNumero = document.getElementById("numeroAleatorio");
    botonNumero.addEventListener("click", ()=>{
        let numero = Math.floor(Math.random()*100);
        document.getElementById("mostrarNumero").textContent=numero;  
    });

    // EJERCICIO 2
    let botonAtras = document.getElementById("cuentaAtras");
    botonAtras.addEventListener("submit", cuentaAtras);
}

window.addEventListener("DOMContentLoaded", load, false);