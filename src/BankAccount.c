#include "BankAccount.h"


BankAccount* bnk_acc_create(__uint64_t number, double balance)
{
    BankAccount* acc = (BankAccount*) malloc(sizeof(BankAccount));

    if (acc != NULL) {
        acc->number = number;
        acc->balance = balance;
    }

    return acc;
}

void bnk_acc_deposit(BankAccount* acc, double value)
{
    acc->balance += value;
}

bool bnk_acc_withdraw(BankAccount* acc, double value)
{
    if (acc->balance >= value) {
        acc->balance -= value;
        return true;
    } 

    return false;
}

void print_balance(BankAccount* acc)
{
    printf("Account %lu balance: %lf\n", acc->number, acc->balance);
}
