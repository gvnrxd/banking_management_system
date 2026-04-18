#include <stdio.h>
#include "account/account.h"

int main() {
    Account acc;

    withdraw(&acc, 50.00);
    deposit(&acc, 29.119);

    return 0;
}