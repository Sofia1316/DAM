// EXPRESIONES REGULARES (OBJETO)

function exp1(){
    // Que empiece con A
    let expReg=/^A/;
    let palabra="hola";

    if(expReg.test(palabra)){
        // Para ver en consola = console.log
        // Para ver en el documento html
        document.writeln("<h2>Empieza por A la palabra --> " + palabra + " </h2>"); 
    } else {
        document.writeln("<h2>No empieza por A la palabra --> "+ palabra +" </h2>")
    }
}

function exp2(){
    // Que empiece con A (tanto mayus como minus)
    let expReg=/^[A|a]/;
    let palabra="arbol";

    if(expReg.test(palabra)){
        document.writeln("<h2>Empieza por A la palabra --> " + palabra + " </h2>"); 
    } else {
        document.writeln("<h2>No empieza por A la palabra --> "+ palabra +" </h2>")
    }
}

function exp3(){
    // Acaba con o y lo que siga después
    let expReg=/o$/;
    let palabra="arbol";

    if(expReg.test(palabra)){
        document.writeln("<h2>Termina con o la palabra --> " + palabra + " </h2>"); 
    } else {
        document.writeln("<h2>No termina por o la palabra --> "+ palabra +" </h2>")
    }
}

function exp4(){
    // La cadena contiene una palabra limitada pero si solo quiero que mi cadena contenga solo hola = \^hola$\
    let expReg=/\bhola\b/;
    let palabra="Juana, hola como estás";

    if(expReg.test(palabra)){
        document.writeln("<h2>True --> " + palabra + " </h2>"); 
    } else {
        document.writeln("<h2>False --> "+ palabra +" </h2>")
    }
}

function exp5(){
    // La cadena contiene una palabra limitada pero puede contener más cosas
    let expReg=/\Bhola\B/;
    let palabra="Juana, hola123 como estás";

    if(expReg.test(palabra)){
        document.writeln("<h2>True --> " + palabra + " </h2>"); 
    } else {
        document.writeln("<h2>False --> "+ palabra +" </h2>")
    }
}

/*------------------------------------------------------------------- CARACTERES ----------------------------------------------------------------------------*/

function exp6(){
    // Cadena alfabética con mayúsculas y minúsculas
    let expReg=/[a-z-A-Z]+/; // el espacio también lo coge
    let palabra="Juana, hola como estás";

    if(expReg.test(palabra)){
        document.writeln("<h2>True --> " + palabra + " </h2>"); 
    } else {
        document.writeln("<h2>False --> "+ palabra +" </h2>")
    }
}

function exp7(){
    // Cadena numérica
    let expReg=/[0-9]+/;
    let palabra="123";

    if(expReg.test(palabra)){
        document.writeln("<h2>True --> " + palabra + " </h2>"); 
    } else {
        document.writeln("<h2>False --> "+ palabra +" </h2>")
    }
}

function exp8(){
    // Cadena numérica con dos valores
    let expReg=/\b[0-9]{2}\b/;
    let palabra="12";

    if(expReg.test(palabra)){
        document.writeln("<h2>True --> " + palabra + " </h2>"); 
    } else {
        document.writeln("<h2>False --> "+ palabra +" </h2>")
    }
}

function exp9(){
    // Cadena numérica con un rango
    let expReg=/\b[0-9]{2,4}\b/;
    let palabra="123";

    if(expReg.test(palabra)){
        document.writeln("<h2>True --> " + palabra + " </h2>"); 
    } else {
        document.writeln("<h2>False --> "+ palabra +" </h2>")
    }
}

function exp9(){
    // Cadena numérica con a partir de...2 por ejemplo
    let expReg=/\b[0-9]{2,}\b/;
    let palabra="123";

    if(expReg.test(palabra)){
        document.writeln("<h2>True --> " + palabra + " </h2>"); 
    } else {
        document.writeln("<h2>False --> "+ palabra +" </h2>")
    }
}

function load(){
    // ASERCIONES
    exp1();
    exp2();
    exp3();
    exp4();
    exp5();
    // CARACTERES
    exp6();
    exp7();
    exp8();
    exp9();
}
window.addEventListener("DOMContentLoaded", load, false);