function random(number){
    return (Math.random()*(number+1)); //el math.random devuelve del 0-1 pero el 1 no lo incluye, por eso le vamos a sumar un 1
}

function cambiarFondo(){
    document.body.style.background=`rgb(${random(255)}, ${random(255)}, ${random(255)}`;
}

function cambiarTexto(){
    document.body.innerHTML="HOLA";
}

function load(){
    let boton = document.querySelector("button");
    boton.addEventListener("click", cambiarFondo, false);

    let boton2 = document.getElementById("boton2");
    boton2.addEventListener("click", cambiarTexto, false);

    let CuadroTexto=document.getElementById("CuadroTexto");
    CuadroTexto.addEventListener("keydown", (event)=>);
}
window.addEventListener("DOMContentLoaded", load, false);