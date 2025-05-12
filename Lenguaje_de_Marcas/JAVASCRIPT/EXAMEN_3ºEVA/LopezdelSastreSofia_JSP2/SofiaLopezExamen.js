function ejercicio1(){
    let ej1 = prompt("Introduce una palabra (menor a 10 caracteres): ");
    let resultado = document.getElementById("resultadoEjercicio1");
    let palabra = /[A-Za-z]{10}/;
    let num = /\d/;

    if(palabra.test(ej1)){
        alert("Cadena no válida, debe de ser menor a 10 caracteres");
        resultado.textContent = "Cadena inválida"
        return;
    } else if(num.test(ej1)){
        alert("Cadena no válida, no puede contener números");
        resultado.textContent = "Cadena inválida"
        return;
    }

    resultado.textContent = "La palabra es: " + ej1;
}

function ejercicio4(){
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
    document.getElementById("respuesta").textContent = "Serie fibonacci " + serie;
}

function ejercicio3(){
    let p1 = prompt("Introduce la primera palabra: ");
    let p2 = prompt("Introduce la segunda palabra: ");
    let p3 = prompt("Introduce la tercera palabra: ");
    let letraA = /[a]/;
    let letraE = /[e]/;
    let letraI = /[i]/;
    let letraO = /[o]/;
    let letraU = /[u]/;
    let contadorA = 0;
    let contadorE = 0;
    let contadorI = 0;
    let contadorO = 0;
    let contadorU = 0;
    let contador1 = 0;

    for(let i = 0; i < p1.length; i++){
        if(letraA.test(p1)){
            contador1++;
            contadorA++;
        } 
        if(letraE.test(p1)){
            contador1++;
            contadorE++;
        } 
        if(letraI.test(p1)){
            contador1++;
            contadorI++;
        }
        if(letraO.test(p1)){
            contador1++;
            contadorO++;
        } 
        if(letraU.test(p1)){
            contador1++;
            contadorU++;
        }
    }

    for(let i = 0; i < p2.length; i++){
        if(letraA.test(p2)){
            contador1++;
            contadorA++;
        } else if(letraE.test(p2)){
            contador1++;
            contadorE++;
        } else if(letraI.test(p2)){
            contador1++;
            contadorI++;
        } else if(letraO.test(p2)){
            contador1++;
            contadorO++;
        } else if(letraU.test(p2)){
            contador1++;
            contadorU++;
        }
    }

    for(let i = 0; i < p3.length; i++){
        if(letraA.test(p3)){
            contador1++;
            contadorA++;
        } else if(letraE.test(p3)){
            contador1++;
            contadorE++;
        } else if(letraI.test(p3)){
            contador1++;
            contadorI++;
        } else if(letraO.test(p3)){
            contador1++;
            contadorO++;
        } else if(letraU.test(p3)){
            contador1++;
            contadorU++;
        }
    }

    document.getElementById("resultadoEjercicio3").textContent = "Vocales totales: " + contador1;
    document.getElementById("resultadoEjercicio3b").textContent = "Vocales: a " + contadorA + ", e " + contadorE + ", i " + contadorI + ", o " + contadorO + ", u " + contadorU;
}

function principal(){
    let boton1 = document.getElementById("ap1");
    boton1.addEventListener("click", ejercicio1);

    let boton4 = document.getElementById("ap4");
    boton4.addEventListener("click", ejercicio4);

    let boton3 = document.getElementById("ap3");
    boton3.addEventListener("click", ejercicio3);
}

window.addEventListener("DOMContentLoaded", principal);