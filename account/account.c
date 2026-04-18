#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "account.h"

void initAccount(Account *account) {
    char username[100];
    char password[100];
    double startingBal;

    printf("Type in username: ");
    scanf("%99s", username);
    printf("Type in password: ");
    scanf("%99s", password);
    printf("Type in starting bal: $");
    scanf("%lf", &startingBal);

    account->username = malloc(strlen(username) + 1);
    account->password = malloc(strlen(password) + 1);

    strcpy(account->username, username);
    strcpy(account->password, password);
    account->balance = startingBal;

    printf("\n\nAccount Information for %s\n", username);
    printf("Your username is: %s\n", username);
    printf("Your password is: %s\n", password);
    printf("Your balance is: $%.2f", startingBal);

}

void withdraw(Account *account) {
    double amount;

    printf("Enter withdrawal amount: ");
    scanf("%lf", &amount);

    printf("Withdrawal initiated for: $%.2f.\n", amount);
}

void deposit(Account *account){
    double amount;

    printf("Enter deposit amount: ");
    scanf("%lf", &amount);

    printf("Deposit initiated for: $%.2f.\n", amount);
}

