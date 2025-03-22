/**
 * @file funcoes.c
 * @author Afonso Corte-Real (a31500@alunos.ipca.pt)
 * @brief 
 * @version 0.1
 * @date 17-03-2025
*/

#include "dados.h"
#include "funcoes.h"
#include <malloc.h>
#include <string.h>
#include <stdio.h>

Element* criaElemento(int v) {
  Element* aux;
  aux = (Element*)malloc(sizeof(Element));
  if (aux != NULL) {
    aux->value = v;
    aux->prox = NULL;
  }
  return (aux);
}

Element* insereInicio(Element* inicio, Element* novo) {
  // validar parametros
  if (novo == NULL) {
    return (inicio); // Não há nada para inserir
  }
  if (!inicio) { // ou if(inicio == NULL)
    inicio = novo; // primeiro elemento da lista
  } else {
    novo -> prox = inicio;
    inicio = novo;
  }
  return (inicio);
}

Element* insereFim(Element* inicio, Element* novo) {
  Element* aux = inicio;
  // se a lista estiver vazia
  if (inicio == NULL) {
    inicio = novo;
    return inicio;
  }
  // caso contrario coloca-se no fim da lista
  while (aux->prox != NULL) aux = aux->prox;
  // insere no fim
  aux->prox = novo;
  return inicio;
}

Element* insereOrdenado(Element* inicio, Element* novo) {
  // validações
  if (novo == NULL) return inicio;

  // se a lista estiver vazia
  if (inicio == NULL) {
    inicio = novo;
    return inicio;
  }

  // restantes situações
  // procurar a posição correta
  Element* aux = inicio;
  Element* aux2 = aux;

  while (aux->value < novo->value && aux->prox != NULL) {
    aux2 = aux;
    aux = aux->prox;
  }

  // verifica se insere no fim
  if (aux->value < novo->value) {
    aux->prox = novo;
  } else { 
    // insere entre elementos
    aux2->prox = novo;
    novo->prox = aux;
  } 
}

void mostraTudo(Element* ini) {
  Element* aux = ini;
  while(ini) {
    printf("Valor: %d", ini->value);
    aux = aux->prox;
  }
}

Element* procuraAlguem(Element* h, int v) {
  Element* aux = h;
  while(aux || aux->value) {
    printf("Valor: %d", aux->value<=v);
    aux = aux->prox;
  }
  if(aux->value == v) return aux;
  return NULL;
}