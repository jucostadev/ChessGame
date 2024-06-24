#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO_TABULEIRO 8

int l, c;

void criar_sep_horiz()
{
    for (c = 0; c < TAMANHO_TABULEIRO; c++)
        printf("|----");
    printf("|\n");
}

void criar_tabuleiro()

{
    char *tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {{"Tp", "Cp", "Bp", "Dp", "Rp", "Bp", "Cp", "Tp"},
                                                             {"Pp", "Pp", "Pp", "Pp", "Pp", "Pp", "Pp", "Pp"},
                                                             {"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
                                                             {"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
                                                             {"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
                                                             {"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
                                                             {"Pb", "Pb", "Pb", "Pb", "Pb", "Pb", "Pb", "Pb"},
                                                             {"Tb", "Cb", "Bb", "Db", "Rb", "Bb", "Cb", "Tb"}};

    for (l = 0; l < TAMANHO_TABULEIRO; l++)
        {
            criar_sep_horiz();
            printf("|");
            for (c = 0; c < TAMANHO_TABULEIRO; c++)
                printf(" %s |", tabuleiro[l][c]);
            printf("\n");
        }
        criar_sep_horiz();
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    criar_tabuleiro();
    return 0;
}