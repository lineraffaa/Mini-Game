package TrabalhoPOO.interfacemodificador;

import java.util.Random;

public class Imparepar implements Modificador {

    /**
     * @return retorna uma String
     */
    @Override
    public String embaralha(String palavra) {
        Random gerador = new Random();

        int gr = 0;
        char[] array = palavra.toCharArray();

        for (int i = 0; i < palavra.length(); i++) {
            gr = gerador.nextInt(palavra.length());
            char aux = array[i];

            if (i % 2 == 0) {
                while (gr % 2 == 0)
                    gr = gerador.nextInt(palavra.length());
            } else {
                while (gr % 2 != 0)
                    gr = gerador.nextInt(palavra.length());
            }
            array[i] = array[gr];
            array[gr] = aux;
        }

        return new String(array);
    }

}
