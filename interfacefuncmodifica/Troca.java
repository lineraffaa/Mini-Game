package TrabalhoPOO.interfacefuncmodifica;

import java.util.ArrayList;
import java.util.Scanner;

import TrabalhoPOO.classe.ConjuntoPalavra;
import TrabalhoPOO.classe.InventaModificador;
import TrabalhoPOO.interfacemodificador.Modificador;
import TrabalhoPOO.interfacemodificador.ModificadorPermutacao;

public class Troca implements FuncionamentoModificador {

    @Override
    public void descricao() {

        System.out.println("Trocou a Palavra");
    }

    @Override
    public void executar() {
        this.descricao();

        ArrayList<Modificador> arraymodificador = new ArrayList<Modificador>();

        Scanner sc = new Scanner(System.in);
        String palavra, usupalavra;

        ConjuntoPalavra conjpalavra = new ConjuntoPalavra();

        ModificadorPermutacao modpermutacao = new ModificadorPermutacao();
        palavra = conjpalavra.aleatorio();
        arraymodificador.add(modpermutacao);

        InventaModificador inventam = new InventaModificador(arraymodificador);

        String palavraEmbaralhada = inventam.retornar().embaralha(palavra);

        System.out.println("Palavra embaralhada: " + palavraEmbaralhada);

        usupalavra = sc.next();

        while (!usupalavra.equals(palavra)) {

            usupalavra = sc.next();
        }

        palavra = conjpalavra.aleatorio();
        sc.close();
    }

}
