/* TODO: Type your header file guards and include directives here. */
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

typedef struct {
    char customerName[21]; 
    double checkingBalance;
    double savingsBalance;
} BankAccount;

BankAccount InitBankAccount(char* newName, double amt1, double amt2);
BankAccount SetName(char* newName, BankAccount account);
void GetName(char* customerName, BankAccount account);
BankAccount SetChecking(double amt, BankAccount account);
double GetChecking(BankAccount account);
BankAccount SetSavings(double amt, BankAccount account);
double GetSavings(BankAccount account);
BankAccount DepositChecking(double amt, BankAccount account);
BankAccount DepositSavings(double amt, BankAccount account);
BankAccount WithdrawChecking(double amt, BankAccount account);
BankAccount WithdrawSavings(double amt, BankAccount account);
BankAccount TransferToSavings(double amt, BankAccount account);

#endif

