#include <stdio.h>
#include "pessoas.h"

int main() {
  Pessoa lista[MAX_PESSOAS];
  int total = 0;

  // Inserindo algumas pessoas
  inserirPessoa(lista, &total, "Ana", 20);
  inserirPessoa(lista, &total, "Carlos", 25);
  inserirPessoa(lista, &total, "Bruno", 30);

  printf("Lista antes de ordenar:\n");
  for (int i = 0; i < total; i++) {
    printf("%s - %d\n", lista[i].nome, lista[i].idade);
  }

  // Ordena pelo nome
  ordenarPorNome(lista, total);

  printf("\nLista depois de ordenar:\n");
  for (int i = 0; i < total; i++) {
    printf("%s - %d\n", lista[i].nome, lista[i].idade);
  }

  // Grava em ficheiro
  if (gravarFicheiro(lista, total, "pessoas.dat")) {
    printf("\nFicheiro gravado com sucesso.\n");
  } else {
    printf("\nErro ao gravar ficheiro.\n");
  }

  // Limpa o array (pra testar o carregamento)
  total = 0;

  // Carrega do ficheiro
  if (carregarFicheiro(lista, &total, "pessoas.dat")) {
    printf("Ficheiro carregado. Agora total = %d\n", total);
  } else {
    printf("Erro ao carregar ficheiro.\n");
  }

  // Mostra o que carregou
  for (int i = 0; i < total; i++) {
    printf("%s - %d\n", lista[i].nome, lista[i].idade);
  }

  // Remove "Carlos"
  removerPessoa(lista, &total, "Carlos");
  printf("\nDepois de remover 'Carlos', total = %d\n", total);
  for (int i = 0; i < total; i++) {
    printf("%s - %d\n", lista[i].nome, lista[i].idade);
  }

  // Para não fechar a janela imediatamente no Windows:
  // system("pause");

  return 0;
}
