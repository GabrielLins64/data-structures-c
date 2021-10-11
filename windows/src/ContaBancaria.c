#include "ContaBancaria.h"


ContaBancaria* conta_bancaria_criar(unsigned int numero, double saldo)
{
    ContaBancaria* conta = (ContaBancaria*) malloc(sizeof(ContaBancaria));

    if (conta != NULL) {
        conta->numero = numero;
        conta->saldo = saldo;
    }

    return conta;
}

void conta_bancaria_depositar(ContaBancaria* conta, double valor)
{
    conta->saldo += valor;
}

bool conta_bancaria_retirar(ContaBancaria* conta, double valor)
{
    if (conta->saldo >= valor) {
        conta->saldo -= valor;
        return true;
    } 

    return false;
}

void conta_bancaria_saldo(ContaBancaria* conta)
{
    printf("Conta número %lu saldo: %lf\n", conta->numero, conta->saldo);
}

void conta_bancaria_liberar(ContaBancaria* conta)
{
    free(conta);
}
