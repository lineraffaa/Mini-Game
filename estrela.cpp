#include <iostream>
#include <iomanip>
#include <ctime>
#define C_GREEN  "\033[32m"
#define BLINK    "\033[5m"
#define C_CYAN   "\033[36m"
#define C_BLUE  "\033[34m"
#include <ncurses.h>

#define LIMITE 10
#define SEG 10
#define L 8
#define C 5
using namespace std;

int underlinePosicao = 0;
int ponto = 0;
time_t inicio;
time_t atual;

void coletar(char matriz[L][C])
{
    for (int j = 0; j < C; j++)
    {
        if (matriz[L - 1][j] == '_' && matriz[L - 2][j] == '*')
        {
            ponto++;
        }
        else if (matriz[L - 1][j] != '_' && matriz[L - 2][j] == '*')
        {
            ponto--;
        }
    }
}

void inicializaMatriz(char matriz[L][C])
{
    for (int i = 0; i < L; i++)
    {
        if (i == L - 1)
        {
            for (int j = 0; i < C; j++)
            {
                if (j == 0)
                    matriz[i][j] = '_';
                else
                    matriz[i][j] = ' ';
            }
        }
        else
        {
            for (int j = 0; j < C; j++)
                matriz[i][j] = ' ';
        }
    }
}
void exibirMatriz(char matriz[L][C])
{
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printw("%c",matriz[i][j]);
        }
        printw("\n");
    }
}

void atualizarMatriz(char matriz[L][C])
{
    for (int i = 0; i < C; i++)
    {
        matriz[0][i] = ' ';
    }
    srand(time(NULL));

    if (rand() % 2)
    {
        matriz[0][rand() % C] = '*';
    }

    for (int i = (L - 2); i > 0; i--)
    {
        for (int j = (C - 1); j > 0; j--)
        {

            matriz[i][j] = matriz[i - 1][j];
        }
    }
}

bool zerar()
{
    return ponto >= 0;
}

bool EncherAPlataforma()
{
    return ponto != LIMITE;
}

bool tempo()
{
    time_t atual;

    time(&atual);

    return (atual - inicio) < SEG;
}

int main()
{
    int objetivo;
    int op;
    bool rodando = true;
    char matriz[L][C];

    cout << BLINK << C_CYAN<< "★¸.•☆•.¸★🄼 🄴 🄽 🅄★⡀.•☆•.★" << endl;

    cout << BLINK << C_GREEN << ">★¸.•☆•.¸★ 🄴 🅂 🄲 🄾 🄻 🄷 🄴 🅁 🄰 🄾 🄿 Ç Ã 🄾 ★⡀.•☆•.★<\n" << ">1.Ⓩ Ⓔ Ⓡ Ⓐ Ⓡ <\n" << ">2.Ⓔ Ⓝ Ⓒ Ⓗ Ⓔ Ⓡ Ⓐ Ⓟ Ⓛ Ⓐ Ⓣ Ⓐ Ⓕ Ⓞ Ⓡ Ⓜ Ⓐ < \n" << ">3.Ⓣ Ⓔ Ⓜ Ⓟ Ⓞ < \n";
    cin >> op;

    if (op > 3 or op < 1) {
        cout << "\n SELECIONE UMA DAS OPÇÕES CORRETAS!" << endl;
        return 0;
    }

    initscr();
    for (int i = L - 1; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            matriz[i][j] = ' ';
            matriz[i - 1][j] = '_';
        }
    }

    inicializaMatriz(matriz);
    
    time(&inicio);
    
   
    while (rodando)
    {
        erase();
        
       
        atualizarMatriz(matriz);
        exibirMatriz(matriz);
        time(&atual);
        printw("\nTempo: %d\n",atual - inicio);
        printw("Pontos: %d\n",ponto);

        switch (getch())
        {

        case 'a':
            if (underlinePosicao > 0)
            {
                matriz[L - 1][underlinePosicao] = ' ';
                underlinePosicao -= 1;
                matriz[L - 1][underlinePosicao] = '_';
            }

            break;

        case 'd':
            if (underlinePosicao < C - 1)
            {
                matriz[L - 1][underlinePosicao] = ' ';
                underlinePosicao += 1;
                matriz[L - 1][underlinePosicao] = '_';
            }

            break;
        case 's':

            break;
        }

        switch (op)
        {
        case 1:
            rodando = zerar();
            break;
        case 2:
            rodando = EncherAPlataforma();
            break;
        case 3:
            rodando = tempo();
            
            break;
        }

        coletar(matriz);
    }
    
    endwin();
}
