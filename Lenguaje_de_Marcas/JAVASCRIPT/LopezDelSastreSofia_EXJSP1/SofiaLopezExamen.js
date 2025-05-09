function ejercicio1(){
    let matricula = document.getElementById("matricula").value;

    let mat = /\d{4}[A-Z]{3}/;

    if(mat.test(matricula)){
        alert("Matrícula válida");
    } else {
        alert("Matrícula no válida");
    }
    
    let litros = parseInt(document.getElementById("litros").value);
    let calc = litros * 1.26;
    alert("El precio es de: " + calc);
}

function ejercicio3(){
    let numRandom = Math.floor(Math.random()*100);
    let boton00 = document.getElementById("boton00").value;
    let boton01 = document.getElementById("boton01").value;
    let boton02 = document.getElementById("boton02").value;
    //let array = [[],[],[]];

    if(boton00 === numRandom){
        alert(`Lo has encontrado`);
    } else if(boton00 === numRandom){
        alert(`Lo has encontrado`);
    } else if(boton00 === numRandom){
        alert(`Lo has encontrado`);
    } else {
        alert('Has perdido');
    }
}

function carga(){
    boton1 = document.getElementById("ej1");
    boton1.addEventListener("click", ejercicio1);
    ejercicio3();
}
window.addEventListener("DOMContentLoaded", carga);