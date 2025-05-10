// -------------------------------- EJERCICIO 1 -----------------------------
/*Codificador de  texto.Utiliza un campo input para que el usuario introduzca el texto a 
codificar, el texto se debe codificar inmediatamente según escribe el usuario. Las 
letras se codifican con el número de la posición que ocupan en el abecedario 
español, por ejemplo si el usuario escribe ABC o abc (no diferencia entre mayúsculas 
y minúsculas) debe aparecer debajo resultado:123 */

let abecedario = "abcdefghijklmnñopqrstuvwxyz";

function traduccion(letra) {
    let numero = 0;
    let encontrado = false;

    while (numero < abecedario.length && !encontrado) {
        if (abecedario[numero] === letra) {
            encontrado = true;
        } else {
            numero++;
        }
    }

    if (encontrado) {
        return numero + 1;
    } else {
        return ""; // Si no es letra, no añade nada
    }
}

function codificarTexto(event) {
    let salida = document.getElementById("textoSalida");
    let letra = event.key.toLowerCase();

    // Solo procesa letras del abecedario
    if (abecedario.includes(letra)) {
        salida.textContent += traduccion(letra);
    }
}

// -------------------------------- EJERCICIO 2 -----------------------------
/*Dado una matriz 2x2, se genera una posición aleatoria y una letra aleatoria. Y el 
usuario debe escribir en la casi la indicada, la letra indicada. Si no, dará un mensaje 
de error que se ha equivocado. Las letras y el número se van generando 
aleatoriamente cada 2 segundos.*/
let letraAdivinar;
let coordenadaI;
let coordenadaJ;



// -------------------------------- MAIN -----------------------------
function load() {
    // EJERCICIO 1
    let entrada = document.getElementById("textoEntrada");
    entrada.addEventListener("keydown", codificarTexto);

    // EJERCICIO 2
    let letras = document.querySelectorAll(".letra");
    letras.forEach(i=>i.addEventListener("keydown"));

    
}

window.addEventListener("DOMContentLoaded", load);
