package TrabalhoPOO.interfacefuncmodifica;

import java.util.ArrayList;
import java.util.Scanner;

import TrabalhoPOO.classe.ConjuntoPalavra;
import TrabalhoPOO.classe.InventaModificador;
import TrabalhoPOO.interfacemodificador.Imparepar;
import TrabalhoPOO.interfacemodificador.Modificador;

public class Tentativas implements FuncionamentoModificador {

    @Override
    public void descricao() {

        System.out.println("5 tentativas");
    }

    @Override
    public void executar() {
        this.descricao();
        Scanner sc = new Scanner(System.in);

        String palavra, usuario;

        ArrayList<Modificador> array2 = new ArrayList<Modificador>();

        Imparepar imparp = new Imparepar();

        ConjuntoPalavra conjpalavra = new ConjuntoPalavra();

        array2.add(imparp);
        palavra = conjpalavra.aleatorio();

        InventaModificador im = new InventaModificador(array2);

        String palavraEmbaralhada = im.retornar().embaralha(palavra);

        System.out.println("Palavra embaralhada: " + palavraEmbaralhada);

        for (int i = 0; i < 5; i++) {
            usuario = sc.next();
            if (usuario.equals(palavra)) {
                System.out.println("Acertou");
                break;
            } else
                System.out.println("Errou");
        }
        palavra = conjpalavra.aleatorio();
        sc.close();
    }
}
