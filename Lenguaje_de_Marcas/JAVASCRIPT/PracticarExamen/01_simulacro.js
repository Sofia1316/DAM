function apartado1(){
    document.body.style.background="hotpink";
    document.getElementById("resultado").innerHTML=' Nombre: Sofía lópez';
}

function apartado2(){
    let array = ["coche","ventana","edificio"];
    let tabla = "<table border='1'><tr><th>Palabra</th><th>Número de letras</th></tr>";

    for(let char of array){
        tabla += `<tr><td>${char}</td><td>${char.length}</td></tr>`;
    }

    document.getElementById("resultado2").innerHTML = tabla;
}

function apartado3(){
    let dni=/\d{8}[A-Z]{1}/;
    let respuesta = prompt("Introduce el dni");

    if(dni.test(respuesta)){
        alert("Dni correcto");
    } else {
        alert("Dni incorrecto");
    }
}

function apartado4(){
    
}

function apartado5(){
    
}

function load(){
    let ej1 = document.getElementById("apartado1");
    ej1.addEventListener("click", apartado1, false);

    let ej2 = document.getElementById("apartado2");
    ej2.addEventListener("click", apartado2, false);

    let ej3 = document.getElementById("apartado3");
    ej3.addEventListener("click", apartado3, false);

    let ej4 = document.getElementById("apartado4");
    ej4.addEventListener("click", apartado4, false);

    let ej5 = document.getElementById("apartado5");
    ej5.addEventListener("click", apartado5, false);
}
window.addEventListener("DOMContentLoaded", load, false);