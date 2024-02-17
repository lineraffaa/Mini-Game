package TrabalhoPOO.classe;

import java.util.ArrayList;

import TrabalhoPOO.interfacefuncmodifica.FuncionamentoModificador;
import TrabalhoPOO.interfacefuncmodifica.Tentativas;
import TrabalhoPOO.interfacefuncmodifica.Troca;

public class ClassePrincipal {
    public static void main(String[] args) {

        ArrayList<FuncionamentoModificador> array = new ArrayList<FuncionamentoModificador>();

        Tentativas tentativas = new Tentativas();
        Troca troca = new Troca();
        array.add(troca);
        array.add(tentativas);

        InventaFuncionamento funcionamento = new InventaFuncionamento(array);

        funcionamento.retornar().executar();

    }

}
