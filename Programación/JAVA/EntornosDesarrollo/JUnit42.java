package a;

import static org.junit.Assert.*;

import org.junit.Test;

public class TestCalculadora {

	@Test
	public void testSumar() {
		// Primer parametro es el valor esperado
		// Segundo parametro es la llamada a la función
		Calculadora calc = new Calculadora();
		assertEquals(5, calc.sumar(3, 2));
	}
	
	public void testRestar() {
		// Primer parametro es el valor esperado
		// Segundo parametro es la llamada a la función
		Calculadora calc = new Calculadora();
		assertEquals(5, calc.restar(15, 10));
	}
	
	public void testMultiplicar() {
		// Primer parametro es el valor esperado
		// Segundo parametro es la llamada a la función
		Calculadora calc = new Calculadora();
		assertEquals(6, calc.multiplicar(2,3));
	}
	
	public void testDividir() {
		// Primer parametro es el valor esperado
		// Segundo parametro es la llamada a la función
		Calculadora calc = new Calculadora();
		assertEquals(8, calc.dividir(10, 2));
	}

}
