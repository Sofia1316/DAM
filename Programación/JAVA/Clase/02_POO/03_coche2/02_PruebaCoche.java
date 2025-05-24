package POO;

public class PruebaCoche03 {

	public static void main(String[] args) {
		coche03[] coches = new coche03[7];
		
		coches[0] = new coche03("leon", "negro", "0101aaa", true, 2000, TipoCoche.Mini, ModalidadRiesgo.Terceros);
		coches[1] = new coche03("r8", "rojo", "0202bbb", false, 2010, TipoCoche.Deportivo, ModalidadRiesgo.TodoRiesgo);
		coches[2] = new coche03("corsa", "plateado", "0303ccc", true, 2005, TipoCoche.Familiar, ModalidadRiesgo.Terceros);
		coches[3] = new coche03("picanto", "azul", "0404ddd", true, 1985, TipoCoche.Utilitario, ModalidadRiesgo.TodoRiesgo);
		coches[4] = new coche03("astra", "negro", "0505eee", false, 1973, TipoCoche.Familiar, ModalidadRiesgo.TodoRiesgo);
		coches[5] = new coche03("shelby", "azul", "0606fff", true, 2016, TipoCoche.Deportivo, ModalidadRiesgo.Terceros);
		coches[6] = new coche03("corvette", "verde", "0707ggg", true, 1999, TipoCoche.Deportivo, ModalidadRiesgo.Terceros);

		ImprimirCoche(coches);
        System.out.println();
        FiltroCoche(coches);

	}
	
	static public void ImprimirCoche(coche03[] coches) {
		System.out.println("COCHES:");
        for (int i = 0; i < coches.length; i++) {
            System.out.println("Coche " + (i + 1) + ": " + coches[i].toString());
        }
	}
	
	static public void FiltroCoche(coche03[] coches) {
		System.out.println("Coches deportivos o con año par:");
        for (coche03 coche : coches) {
            if (coche.getUnCoche() == TipoCoche.Deportivo || coche.getAñoFabricacion() % 2 == 0) {
                System.out.println(coche.toString());
            }
        }
	}
	
}
