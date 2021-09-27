#include "tests.h"
#include "Cube.h"
#include "BankAccount.h"


void test_cube()
{
    Cube* myCube;
    myCube = cube_create(2.0);

    print_cube(myCube);
    cube_set_edge(myCube, 3.0);
    print_cube(myCube);

    cube_free(myCube);
}

void test_bnk_acc()
{
    BankAccount* bnkAccount;
    bnkAccount = bnk_acc_create(0, 0);

    print_balance(bnkAccount);
    bnk_acc_deposit(bnkAccount, 50.0);
    print_balance(bnkAccount);
    bnk_acc_withdraw(bnkAccount, 65.23);
    print_balance(bnkAccount);
    bnk_acc_withdraw(bnkAccount, 21.23);
    print_balance(bnkAccount);
}
