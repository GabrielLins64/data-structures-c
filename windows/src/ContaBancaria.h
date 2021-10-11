#ifndef _H_BNK_ACC
#define _H_BNK_ACC

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct contaBancaria ContaBancaria;

/**
 * @brief Uma representação de conta bancária
 * 
 */
struct contaBancaria
{
    unsigned int numero;
    double saldo;
};

/**
 * @brief Cria um objeto do tipo abstrato conta bancária
 * 
 * @param numero ID da conta
 * @param saldo Saldo da conta
 * @return ContaBancaria* 
 */
ContaBancaria* conta_bancaria_criar(unsigned int numero, double saldo);

/**
 * @brief Deposita um valor na conta
 * 
 * @param conta 
 * @param value 
 */
void conta_bancaria_depositar(ContaBancaria* conta, double value);

/**
 * @brief Retira um valor da conta
 * 
 * @param conta 
 * @param value 
 * @return true se a conta tem o valor disponível
 * @return false se o valor é maior que o contido na conta
 */
bool conta_bancaria_retirar(ContaBancaria* conta, double value);

/**
 * @brief Printa o saldo da conta
 * 
 * @param conta 
 */
void conta_bancaria_saldo(ContaBancaria* conta);

/**
 * @brief Libera a memória alocada pelo objeto
 * 
 * @param conta 
 */
void conta_bancaria_liberar(ContaBancaria* conta);

#endif
