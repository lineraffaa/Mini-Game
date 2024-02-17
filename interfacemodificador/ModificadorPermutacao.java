package TrabalhoPOO.interfacemodificador;

import java.util.Random;

public class ModificadorPermutacao implements Modificador {

    /**
     * @param palavra passado de parametro uma string
     * @return retorna uma nova string
     */
    @Override
    public String embaralha(String palavra) {
        Random gerador = new Random();
        int g = 0;
        char aux;
        char[] array = palavra.toCharArray();
        for (int i = 0; i < palavra.length(); i++) {
            g = gerador.nextInt(palavra.length());
            aux = array[i];
            array[i] = array[g];
            array[g] = aux;

        }
        return new String(array);
    }

}
