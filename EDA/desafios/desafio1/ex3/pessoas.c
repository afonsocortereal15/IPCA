#include "pessoas.h"
#include <stdio.h>   // printf, FILE, fopen, etc.
#include <string.h>  // strcpy, strcmp

int inserirPessoa(Pessoa pessoas[], int *count, const char *nome, int idade) {
  if (*count >= MAX_PESSOAS) {
    // Array cheio, não podemos inserir
    return 0;
  }
  // Copiamos o nome e definimos a idade
  strcpy(pessoas[*count].nome, nome);
  pessoas[*count].idade = idade;
  (*count)++;
  return 1;
}

int removerPessoa(Pessoa pessoas[], int *count, const char *nome) {
  // Procurar a pessoa pelo nome
  for (int i = 0; i < *count; i++) {
    if (strcmp(pessoas[i].nome, nome) == 0) {
      // "Empurra" todo mundo uma posição para trás
      for (int j = i; j < (*count) - 1; j++) {
        pessoas[j] = pessoas[j + 1];
      }
      (*count)--;
      return 1;
    }
}
  return 0; // Não encontrou
}

void ordenarPorNome(Pessoa pessoas[], int count) {
  // Exemplo de Bubble Sort simples
  for (int i = 0; i < count - 1; i++) {
    for (int j = 0; j < count - i - 1; j++) {
      if (strcmp(pessoas[j].nome, pessoas[j + 1].nome) > 0) {
        // Troca
        Pessoa temp = pessoas[j];
        pessoas[j] = pessoas[j + 1];
        pessoas[j + 1] = temp;
      }
    }
  }
}

int gravarFicheiro(const Pessoa pessoas[], int count, const char *filename) {
  FILE *fp = fopen(filename, "wb");
  if (!fp) {
      return 0; // Falha ao abrir
  }
  // 1) Grava quantas pessoas existem
  fwrite(&count, sizeof(int), 1, fp);
  // 2) Grava as pessoas
  fwrite(pessoas, sizeof(Pessoa), count, fp);
  fclose(fp);
  return 1;
}

int carregarFicheiro(Pessoa pessoas[], int *count, const char *filename) {
  FILE *fp = fopen(filename, "rb");
  if (!fp) {
    return 0; // Falha ao abrir
  }
  // 1) Lê a quantidade de pessoas
  fread(count, sizeof(int), 1, fp);
  // 2) Lê os dados de cada pessoa
  fread(pessoas, sizeof(Pessoa), *count, fp);
  fclose(fp);
  return 1;
}