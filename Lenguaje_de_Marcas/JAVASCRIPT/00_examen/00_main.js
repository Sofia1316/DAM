// EJERCICIO 1; Crea un programa que insertando un número en un cuadro de formulario indique si es par o impar.
function apartado1() {
    let numero = document.getElementById("numero").value;

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

// EJERCCIIO 3; añadir nombre al documento html
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

    // Verificar que el descuento esté en el rango correcto
    if (porcentaje > 100 || porcentaje < 0) {
        alert("El descuento debe ser entre 0 y 100");
    } else {
        // Calcular el precio con el descuento aplicado
        let calculo1 = (porcentaje / 100) * precio;
        let calculo2 = precio - calculo1;

        // Mostrar el resultado en el campo de "resultado"
        document.getElementById("resultado").value = "El precio con descuento es: " + calculo2;
    }
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
    document.getElementById("numeroAleatorio").textContent = numero; // Mostrar el número generado
}

function reiniciarNumero() {
    document.getElementById("numeroAleatorio").textContent = "-"; // Reiniciar el valor mostrado a "-"
}


// MAIN
function load() {
    let boton1 = document.getElementById("ap1");
    boton1.addEventListener("submit", apartado1);

    let boton2 = document.getElementById("ap2");
    boton2.addEventListener("click", apartado2);

    let boton3 = document.getElementById("ap3");
    boton3.addEventListener("click", apartado3);

    let boton4 = document.getElementById("ap4");
    boton4.addEventListener("click", apartado4);

    let boton5 = document.getElementById("ap5");
    boton5.addEventListener("click", apartado5);

    apartado6();

    document.getElementById("ap7").addEventListener("click", apartado7); // Generar número aleatorio
    document.getElementById("reiniciarBtn").addEventListener("click", reiniciarNumero); // Reiniciar número

}

window.addEventListener("DOMContentLoaded", load);
