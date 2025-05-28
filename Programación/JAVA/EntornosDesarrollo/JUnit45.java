package a;

public class Blancos {
    public String eliminarBlancos(String texto) {
        return texto.replaceAll("\\s+", " ");
    }
}
