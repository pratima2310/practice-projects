#include "BankAccount.h"
#include <string.h>

BankAccount InitBankAccount(char* newName, double amt1, double amt2) {
    BankAccount account;
    strncpy(account.customerName, newName, 20);
    account.customerName[20] = '\0'; 
    account.checkingBalance = amt1;
    account.savingsBalance = amt2;
    return account;
}

BankAccount SetName(char* newName, BankAccount account) {
    strncpy(account.customerName, newName, 20);
    account.customerName[20] = '\0'; 
    return account;
}

void GetName(char* customerName, BankAccount account) {
    strncpy(customerName, account.customerName, 20);
    customerName[20] = '\0'; 
}

BankAccount SetChecking(double amt, BankAccount account) {
    account.checkingBalance = amt;
    return account;
}

double GetChecking(BankAccount account) {
    return account.checkingBalance;
}

BankAccount SetSavings(double amt, BankAccount account) {
    account.savingsBalance = amt;
    return account;
}

double GetSavings(BankAccount account) {
    return account.savingsBalance;
}

BankAccount DepositChecking(double amt, BankAccount account) {
    if (amt > 0) {
        account.checkingBalance += amt;
    }
    return account;
}

BankAccount DepositSavings(double amt, BankAccount account) {
    if (amt > 0) {
        account.savingsBalance += amt;
    }
    return account;
}

BankAccount WithdrawChecking(double amt, BankAccount account) {
    if (amt > 0 && amt <= account.checkingBalance) {
        account.checkingBalance -= amt;
    }
    return account;
}

BankAccount WithdrawSavings(double amt, BankAccount account) {
    if (amt > 0 && amt <= account.savingsBalance) {
        account.savingsBalance -= amt;
    }
    return account;
}

BankAccount TransferToSavings(double amt, BankAccount account) {
    if (amt > 0 && amt <= account.checkingBalance) {
        account.checkingBalance -= amt;
        account.savingsBalance += amt;
    }
    return account;
}
// main.c --------------------------------------------------------------------------------------
int main() {
   BankAccount account = InitBankAccount("Mickey", 500.00, 1000.00);
   char name[20];
   
   account = SetChecking(500, account);
   account = SetSavings(500, account);
   account = WithdrawSavings(100, account);
   account = WithdrawChecking(100, account);
   account = TransferToSavings(300, account);
   
   GetName(name, account);
   printf("%s\n", name);
   printf("$%.2f\n", GetChecking(account));
   printf("$%.2f\n", GetSavings(account));

   return 0;
}