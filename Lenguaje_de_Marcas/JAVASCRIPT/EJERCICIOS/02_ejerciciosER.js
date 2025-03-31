/*
Introducir una fecha en formato cadena mediante el método prompt() y en formato 
dd,mm, aaaa (por ejemplo, 23,01, 2008) y devolver en un cuadro de mensaje el 
número de días que han pasado hasta la fecha actual. Si la cadena introducida no 
se reconoce como fecha devolverá false.
*/ 
function ap1(){
    let usuario = prompt("Introduce una fecha en formato dd,mm,aaaa: "); // Pedir la fecha al usuario
    let fecha = /^\d{2},0[1-9]|1[1-9],\d{4}$/; // Expresión regular para la fecha

    if (fecha.test(usuario)){
        let [dia, mes, anio] = usuario.split(",").map(Number);
            // usuario.split(",") --> divide lo introducido con comas
            // .map(Number) --> convierte cada elemento que hay entre comas en un nº único
        
        // Crear el objeto de fecha
        let fechaIntroducida = new Date(anio, mes - 1, dia); // los meses empiezan en 0, por eso -1
        if (isNaN(fechaIntroducida.getTime())) { // si la fecha no es válida, devuelve NaN
            alert(false);
        } else {
            // Obtener la fecha actual
            let fechaActual = new Date();
            let dias = fechaActual - fechaIntroducida;
            // Convertir a días
            let dias2 = Math.floor(dias / (1000 * 60 * 60 * 24));
            
            alert(`Han pasado ${dias2} días desde la fecha introducida.`);
        }
    } else { alert(false); }
}

/*
Introduce mediante un prompt un correo electrónico, si dicho correo electrónico es 
válido devolverá el número de letras que tiene el usuario. Si no determinará que es 
invalido y determinará dónde está el error si en el usuario o el dominio.  
*//*
function ap2(){
    let correo = prompt("sofia@gmail.com");
    let comprobacion = /^\d[a-z-A-Z-0-9]{10}\d[@]{1}\d[a-z-A-Z]{8}\d[.com-.es]{4}$/

    if(!comprobacion.test(correo)){
        alert(false);
    } else {
        let recuento = 
        alert("El numero de letras del usuario es de: " + recuento)
    }

}
*/
function load(){
    ap1();
    ap2();
}
window.addEventListener("DOMContentLoaded", load, false);