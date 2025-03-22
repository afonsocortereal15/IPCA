/**
 * @file main.c
 * @author Afonso Corte-Real (a31500@alunos.ipca.pt)
 * @brief 
 * @version 0.1
 * @date 17-03-2025
*/

#include "funcoes.h"
#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"

void main() {
  Element* inicio = NULL;
  Element* novo;
  novo = criaElemento(129);
  if (novo != NULL) {
    printf("Valor: %d\n", novo->value);
  }
  inicio = insereInicio(inicio, novo);
  inicio = insereFim(inicio, novo);
}
