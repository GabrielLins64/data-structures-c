#ifndef _H_BNK_ACC
#define _H_BNK_ACC

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct bankAccount BankAccount;

/**
 * @brief A bank account representation
 * 
 */
struct bankAccount
{
    __uint64_t number;
    double balance;
};

/**
 * @brief Create a bank account object
 * 
 * @param number Account ID
 * @param balance Account balance
 * @return BankAccount* 
 */
BankAccount* bnk_acc_create(__uint64_t number, double balance);

/**
 * @brief Deposit a value in the bank account
 * 
 * @param acc 
 * @param value 
 */
void bnk_acc_deposit(BankAccount* acc, double value);

/**
 * @brief Withdraw "value" from the account
 * 
 * @param acc 
 * @param value 
 * @return true if the account has the value available
 * @return false if the value is higher than account balance
 */
bool bnk_acc_withdraw(BankAccount* acc, double value);

/**
 * @brief Prints the account balance
 * 
 * @param acc 
 */
void print_balance(BankAccount* acc);

#endif
