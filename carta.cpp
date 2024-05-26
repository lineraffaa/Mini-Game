#include <iostream>
#include "Pilha.cpp"
#include <algorithm>
#include <random>
#include <string>
#define C_GREEN "\033[32m"
#define C_RED "\033[31m"
#define C_CYAN "\033[36m"
#define RESET "\x1b[0m"
#define C_MAGENTA "\033[35m"
#define BLINK "\033[5m"
#define C_BLACK "\033[30m"
#define N 5

string personagem[N], resposta, respostaserie, personagem2[N];
string serie[N], p[N];
string palavra_para_adivinhar, serie_para_adivinhar, resposta_certa, resposta_serie;

char escolha;
int cont = 0, ponto = 0;
int op;
bool jogando = true;

void embaralhar(std::string &p)
{

    random_shuffle(p.begin(), p.end());
}

void op_Um()
{
    no *pilha4;
    pilha4 = inicializaPilha(pilha4);

    for (int i = 0; i < N; i++)
    {
        pilha4 = PUSH(pilha4, personagem2[i]);
    }

    for (int i = 0; i < N; i++)
    {
        embaralhar(personagem2[i]);
    }

    no *pilha3;
    pilha3 = inicializaPilha(pilha3);

    for (int i = 0; i < N; i++)
    {
        pilha3 = PUSH(pilha3, personagem2[i]);
    }
    cont = 0;
    ponto = 0;
    while (N > cont)
    {
        POP(pilha4, &resposta_certa);
        POP(pilha3, &palavra_para_adivinhar);
        cout << C_MAGENTA << BLINK << "🅿 🅴 🆁 🆂 🅾 🅽 🅰 🅶 🅴 🅼" RESET "\n"<< endl;
        cout << palavra_para_adivinhar << endl;
        cin >> resposta;

        if (resposta == resposta_certa)
        {
            ponto++;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else if (resposta == resposta_certa)
        {
            ponto++;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else if (resposta == resposta_certa)
        {
            ponto++;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else if (resposta == resposta_certa)
        {
            ponto++;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else if (resposta == resposta_certa)
        {
            ponto++;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else
        {
            
            cout << C_RED << "(-_-) 🄴 🅁 🅁 🄾 🅄 ! (-_-)" RESET "\n"
                 << endl;
        }
        cout << "⭐🌟 P͙o͙n͙t͙u͙a͙ção͙: " << ponto << " 🌟⭐" << endl;
        cont++;
    }
}

void op_Dois()
{
    no *pilha4;
    pilha4 = inicializaPilha(pilha4);

    for (int i = 0; i < N; i++)
    {
        pilha4 = PUSH(pilha4, serie[i]);
    }

    no *pilha5;
    pilha5 = inicializaPilha(pilha5);
    for (int i = 0; i < N; i++)
    {
        pilha5 = PUSH(pilha5, personagem[i]);
    }

    for (int i = 0; i < N; i++)
    {
        embaralhar(personagem[i]);
        embaralhar(serie[i]);
    }

    no *pilha2;
    pilha2 = inicializaPilha(pilha2);

    for (int i = 0; i < N; i++)
    {
        pilha2 = PUSH(pilha2, serie[i]);
    }

    no *pilha;
    pilha = inicializaPilha(pilha);

    for (int i = 0; i < N; i++)
    {
        pilha = PUSH(pilha, personagem[i]);
    }
    cont = 0;
    ponto = 0;
    while (N > cont)
    {
        POP(pilha5, &resposta_certa);
        POP(pilha4, &resposta_serie);
        POP(pilha2, &serie_para_adivinhar);
        POP(pilha, &palavra_para_adivinhar);
        cout << C_MAGENTA << BLINK << "🅿 🅴 🆁 🆂 🅾 🅽 🅰 🅶 🅴 🅼" RESET "\n"
             << endl;
        cout << palavra_para_adivinhar << endl;
        cin >> resposta;
        cout << C_MAGENTA << BLINK << "🆂 é 🆁 🅸 🅴" RESET "\n"
             << endl;
        cout << serie_para_adivinhar << endl;
        cin >> respostaserie;

        if (resposta == resposta_certa && respostaserie == resposta_serie)
        {
            ponto = ponto + 2;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else if (resposta == resposta_certa && respostaserie == resposta_serie)
        {
            ponto = ponto + 2;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else if (resposta == resposta_certa && respostaserie == resposta_serie)
        {
            ponto = ponto + 2;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else if (resposta == resposta_certa && respostaserie == resposta_serie)
        {
            ponto = ponto + 2;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else if (resposta == resposta_certa && respostaserie == resposta_serie)
        {
            ponto = ponto + 2;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else
        {
            
            cout << C_RED << "(-_-) 🄴 🅁 🅁 🄾 🅄 ! (-_-)" RESET "\n"
                 << endl;
        }
        cout << "⭐🌟 P͙o͙n͙t͙u͙a͙ção͙: " << ponto << "🌟⭐" << endl;
        cont++;
    }
}

void op_Tres()
{
    no *pilha4;
    pilha4 = inicializaPilha(pilha4);

    for (int i = 0; i < N; i++)
    {
        pilha4 = PUSH(pilha4, serie[i]);
    }

    for (int i = 0; i < N; i++)
    {
        embaralhar(serie[i]);
    }

    no *pilha2;
    pilha2 = inicializaPilha(pilha2);

    for (int i = 0; i < N; i++)
    {
        pilha2 = PUSH(pilha2, serie[i]);
    }
    cont = 0;
    ponto = 0;
    while (N > cont)
    {
        POP(pilha4, &resposta_certa);
        POP(pilha2, &serie_para_adivinhar);
        cout << C_MAGENTA << BLINK "🆂 é 🆁 🅸 🅴" << endl;
        cout << serie_para_adivinhar << endl;
        cin >> respostaserie;

        if (respostaserie == resposta_certa)
        {
            ponto++;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else if (respostaserie == resposta_certa)
        {
            ponto++;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else if (respostaserie == resposta_certa)
        {
            ponto++;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else if (respostaserie == resposta_certa)
        {
            ponto++;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else if (respostaserie == resposta_certa)
        {
            ponto++;
            cout << C_GREEN << "(¯`◕‿◕´¯)  🄰 🄲 🄴 🅁 🅃 🄾 🅄 ! (¯`◕‿◕´¯)" RESET "\n"
                 << endl;
        }
        else
        {
            
            cout << C_RED << "(-_-) 🄴 🅁 🅁 🄾 🅄 ! (-_-)" RESET "\n"
                 << endl;
        }
        cout << "⭐🌟 P͙o͙n͙t͙u͙a͙ção͙: 🌟⭐ " << ponto << endl;
        cont++;
    }
}
void jogo()
{
    cout << C_CYAN << "╰┈➤ ❝ [E̲s̲c̲o̲l̲h̲a̲ ̲a̲s̲ ̲o̲p̲ç̲õ̲e̲s̲ ̲d̲e̲ ̲j̲o̲g̲o̲s̲] ❞" << endl;
    cout << "{•---» ⧸1⧶ «---•}: »»---(¯`N▪o▪m▪e▪ ▪d▪o´¯)---»» ¸.·✩·.¸¯⍣✩ Ⓟ ⓔ ⓡ ⓢ ⓞ ⓝ ⓐ ⓖ ⓔ ⓜ ✩⍣¯·..·✩·.¸" << endl;
    cout << "{•---» ⧸2⧶ «---•}: »»---(¯`N▪o▪m▪e▪ ▪d▪o´¯)---»» ¸.·✩·.¸¯⍣✩ Ⓟ ⓔ ⓡ ⓢ ⓞ ⓝ ⓐ ⓖ ⓔ ⓜ ✩⍣¯·..·✩·.¸ E ꧁•⊹٭𝚂é𝚛𝚒𝚎٭⊹•꧂" << endl;
    cout << "{•---» ⧸3⧶ «---•}: »»---(¯`N▪o▪m▪e▪ ▪d▪a´¯)---»» ꧁•⊹٭𝚂é𝚛𝚒𝚎٭⊹•꧂" RESET "\n"
         << endl;

    cin >> op;
    if (op > 3 || op < 1)
    {
        cout << C_RED << "SELECIONE UMA DAS OPÇÕES CORRETAS!" RESET "\n"
             << endl;
    }
    else
    {
        cout << op << endl;
        switch (op)
        {
        case 1:
            cout << op << endl;
            op_Um();

            break;
        case 2:
            op_Dois();
            break;

        case 3:
            op_Tres();
            break;

        default:
            break;
        }
    }
}
void nome()
{
    personagem2[0] = "amy";
    personagem2[1] = "phoebe";
    personagem2[2] = "sheldon";
    personagem2[3] = "leonard";
    personagem2[4] = "rachel";

    personagem[0] = "cristina";
    personagem[1] = "alex";
    personagem[2] = "monica";
    personagem[3] = "julia";
    personagem[4] = "penny";

    serie[0] = "velvet";
    serie[1] = "themorningshow";
    serie[2] = "friends";
    serie[3] = "elinternato";
    serie[4] = "bigbangtheory";
}
using namespace std;

int main()
{

    nome();

    jogo();

    while (jogando)
    {
        cout << C_BLACK << "Deseja continuar jogando?? \n s para continar e n para finalizar" << endl;
        cin >> escolha;
        if (escolha == 's')
        {
            jogo();
        }
        else
        {
            break;
        }
    }
}