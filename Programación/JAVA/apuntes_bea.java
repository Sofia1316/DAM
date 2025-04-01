// PAQUETE DE EJEMPLO
package P1;

// EN UN ARCHIVO
public class main{
    public static void main(String[], args){
        // Mi primer objeto de tipo coche que c1
        // Creo una variable de tipo coche, en este caso, c1
        // Al poner new coche estoy llamando al constructor de la función coche de abajo
        coche c1 = new coche ("Ford", "Orion", 12);
        System.out.println(c1.toString());
    }
}

// EN OTRO ARCHIVO
public class coche {
    // DEFINIMOS LAS VARIABLES PRIVADAS; solo se pueden usar dentro de la clase
    private String marca;
    private String modelo;
    private int potencia;

    // Esto se puede crear automáticamente en source, tercer apartado

    // CONSTRUCTOR; es una función que se llama igual que la clase y que le da atributos (crea objetos)
    // Este nos permite que la clase se transforme en un objeto
    public coche(String marca, String modelo){
        this.marca = marca;
        this.modelo = modelo;
        this.potencia = 0; // potencia es 0 porque solo necesito marca y modelo
    }

    // Métodos = funciones
    // getters (con este obtengo el valor de los atributos)
    public String getMarca(){
        return this.marca;
    }
    public String getModelo(){
        return this.modelo;
    }
    public int getPotencia(){
        return this.potencia;
    }
    // setters (con este modifico el valor de los atributos)
    public void setMarca(String m1){
        this.marca = m1;
    }
    public void setModelo(String m2){
        this.modelo = m2;
    }
    public void setPotencia(Int p1){
        this.potencia = p1;
    }

    // Funciones relacionadas con coche
}