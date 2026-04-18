#include "account.h"
#include <stdio.h>

void withdraw(Account *account, double amount) {
    printf("Withdrawal initiated for: $%.2f.\n", amount);
}

void deposit(Account *account, double amount){
    printf("Deposit initiated for: $%.2f.\n", amount);
}