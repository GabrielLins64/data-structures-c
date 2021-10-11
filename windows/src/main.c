#include <stdint.h>
#include "ContaBancaria.h"


int main(int argc, char* argv[])
{
    ContaBancaria* contaBancaria;
    contaBancaria = conta_bancaria_criar(0, 0);

    // Mostra o saldo inicial da conta bancária.
    conta_bancaria_saldo(contaBancaria);

    // Insere 50 reais na conta e mostra o saldo.
    conta_bancaria_depositar(contaBancaria, 50.0);
    conta_bancaria_saldo(contaBancaria);

    // Tenta retirar 65.23 reais da conta e mostra o saldo.
    conta_bancaria_retirar(contaBancaria, 65.23);
    conta_bancaria_saldo(contaBancaria);

    // Retira 21.23 reais da conta e mostra o saldo.
    conta_bancaria_retirar(contaBancaria, 21.23);
    conta_bancaria_saldo(contaBancaria);

    // Libera a memória alocada pelo objeto.
    conta_bancaria_liberar(contaBancaria);

    return (0);
}
