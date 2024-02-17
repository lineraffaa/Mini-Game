package TrabalhoPOO.classe;

import java.util.ArrayList;
import java.util.Random;

import TrabalhoPOO.interfacemodificador.Modificador;

public class InventaModificador {

    // ModificadorPermutacao modificador = new ModificadorPermutacao();
    ArrayList<Modificador> array;

    /**
     * 
     * @param array lista dos modificadores disponiveis
     */
    public InventaModificador(ArrayList<Modificador> array) {
        this.array = array;
    }

    /**
     * 
     * @return array acessa o elemento de uma posição qualquer
     */
    public Modificador retornar() {
        Random gerar = new Random();
        int i = gerar.nextInt(array.size());

        try {
            return array.get(i);
        } catch (Exception e) {
            System.out.println(e);
            return null;
        }

    }

}
