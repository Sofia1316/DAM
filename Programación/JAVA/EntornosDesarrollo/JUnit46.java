package a;

import static org.junit.Assert.*;
import org.junit.Test;

public class TestBlancos {

    @Test
    public void testEliminarBlancos() {
        Blancos b = new Blancos();
        String input = "Hola\tque\n tal";
        String expected = "Hola que tal";
        assertEquals(expected, b.eliminarBlancos(input));
    }
}
