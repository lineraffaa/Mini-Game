package TrabalhoPOO.classe;

import java.util.ArrayList;
import java.util.Random;

public class ConjuntoPalavra {
    ArrayList<String> palavra = new ArrayList<>();

    public ConjuntoPalavra() {
        palavra.add("Pneumoultramicroscopicossilicovulcanoconiótico");
        palavra.add("monaco");
        palavra.add("veneza");
        palavra.add("venezuela");
        palavra.add("oompaloompa");
        palavra.add("estomago");
        palavra.add("carvalho");
        palavra.add("ursopolar");
        palavra.add("ursopanda");
        palavra.add("jupiter");
    }

    /**
     * 
     * @return acessa uma posição qualquer da string
     */
    public String aleatorio() {
        Random gerador = new Random();
        int i = gerador.nextInt(palavra.size());
        return palavra.get(i);
    }

}
