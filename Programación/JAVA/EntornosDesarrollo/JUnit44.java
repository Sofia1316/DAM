package a;

import java.util.ArrayList;
import java.util.List;
import static org.junit.Assert.*;
import org.junit.Test;

public class TestOrdenar {

	@Test
	public void testOrdenar() {
		Ordenar o = new Ordenar();

        List<Integer> a = new ArrayList<>();
        a.add(3);
        a.add(1);
        // Assuming ordenarLista returns a sorted list
        List<Integer> expected1 = new ArrayList<>();
        expected1.add(1);
        expected1.add(3);
        assertEquals(expected1, o.ordenarLista(a));

        List<Integer> b = new ArrayList<>();
        b.add(7);
        b.add(2);
        List<Integer> expected2 = new ArrayList<>();
        expected2.add(2);
        expected2.add(7);
        assertEquals(expected2, o.ordenarLista(b));
	}

}
