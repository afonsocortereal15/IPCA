/*
Estruturar Programas

lufer
*/

#pragma warning (disable: 4996)
#include <stdio.h>
#include <locale.h>

#include "menu.h"
#include "inscricao.h"

// fun��o principal
int main() {
    setlocale(LC_ALL, "Portuguese");
	// declara��o e inicializa��o de vari�veis
	char op;
	char nomeFicheiro[20] = "inscricoesdata.txt";
	char texto[TAM];
    do {
       op = apresentaMenu();
        switch(op) {
            case '1':  inserirInscricoes(nomeFicheiro);
                       break;
             case '2': listarInscricoes(nomeFicheiro);
                       break;
            case '3':  listarUmaInscricao(nomeFicheiro);
                       break;
            case '4':  // Sair: nao faz nada
                       break;
            default: printf("op��o desconhecida!\n");
                      break;
        }
    } while(op != '4');

	return 0;
}
