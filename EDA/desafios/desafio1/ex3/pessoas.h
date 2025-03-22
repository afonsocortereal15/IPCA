#ifndef PESSOAS_H
#define PESSOAS_H

#define MAX_PESSOAS 100

/**
 * @brief Estrutura que representa uma pessoa.
 */
typedef struct {
  char nome[50];
  int idade;
} Pessoa;

/**
 * @brief Insere uma pessoa no array.
 * @param pessoas Array de pessoas.
 * @param count Ponteiro para o número atual de pessoas.
 * @param nome Nome a inserir.
 * @param idade Idade a inserir.
 * @return 1 se inseriu com sucesso, 0 se o array estiver cheio.
 */
int inserirPessoa(Pessoa pessoas[], int *count, const char *nome, int idade);

/**
 * @brief Remove uma pessoa do array, procurando pelo nome.
 * @param pessoas Array de pessoas.
 * @param count Ponteiro para o número atual de pessoas.
 * @param nome Nome da pessoa a remover.
 * @return 1 se removeu com sucesso, 0 se não encontrou a pessoa.
 */
int removerPessoa(Pessoa pessoas[], int *count, const char *nome);

/**
 * @brief Ordena as pessoas pelo nome (ordem alfabética).
 * @param pessoas Array de pessoas.
 * @param count Número de pessoas no array.
 */
void ordenarPorNome(Pessoa pessoas[], int count);

/**
 * @brief Grava o array de pessoas num ficheiro binário.
 * @param pessoas Array de pessoas.
 * @param count Quantidade de pessoas.
 * @param filename Nome do ficheiro.
 * @return 1 se gravou com sucesso, 0 se houve erro ao abrir o ficheiro.
 */
int gravarFicheiro(const Pessoa pessoas[], int count, const char *filename);

/**
 * @brief Carrega pessoas de um ficheiro binário para o array.
 * @param pessoas Array de pessoas.
 * @param count Ponteiro para o número de pessoas (será atualizado).
 * @param filename Nome do ficheiro.
 * @return 1 se carregou com sucesso, 0 se houve erro ao abrir o ficheiro.
 */
int carregarFicheiro(Pessoa pessoas[], int *count, const char *filename);

#endif