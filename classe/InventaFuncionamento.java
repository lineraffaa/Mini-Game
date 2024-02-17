package TrabalhoPOO.classe;

import java.util.ArrayList;
import java.util.Random;

import TrabalhoPOO.interfacefuncmodifica.FuncionamentoModificador;

public class InventaFuncionamento {
    ArrayList<FuncionamentoModificador> array;

    /**
     * 
     * @param array lista dos quais tipos de funcionamento funcionamento
     */
    public InventaFuncionamento(ArrayList<FuncionamentoModificador> array) {
        this.array = array;
    }

    /**
     * 
     * @return array acessando o elemento de uma posição qualquer
     */
    public FuncionamentoModificador retornar() {

        Random gerar = new Random();
        int i = gerar.nextInt(array.size()); // nextInt(gerar um valor aleatorio inteiro) e size (para não gerar um
                                             // valor maior que o do vetor)
        return array.get(i);
    }

}
