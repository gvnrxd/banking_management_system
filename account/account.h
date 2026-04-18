#ifndef ACCOUNT_H
#define ACCOUNT_H

// Initialize using struct Account acc
typedef struct { 
    int id;
    double balance;
    char *username;
    char *password;
} Account;

// Define account functions
void withdraw(Account *account);
void deposit(Account *account);
void initAccount(Account *account);

#endif