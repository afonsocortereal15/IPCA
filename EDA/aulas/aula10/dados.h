/**
 * @file dados.h
 * @author Afonso Corte-Real (a31500@alunos.ipca.pt)
 * @brief 
 * @version 0.1
 * @date 17-03-2025
*/

#include <stdbool.h>

#define M 100

typedef struct Element {
  int value;
  char* name[M];
  struct Element *prox;
} Element;
