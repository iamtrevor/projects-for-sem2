// a program to calculate a banking process

#include <iostream>
using namespace std;

class BankAccount {   
private:
    double balance;

public:
    // Constructor to initialize the account with a balance
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Method to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    // Method to withdraw money
    bool withdraw(double amount) {
        if (amount > balance) {
            cout << "Withdrawal of $" << amount << " denied. Insufficient funds." <<endl;
            return false; 
        }
        balance -= amount;
        cout << "Withdrew: $" << amount <<endl;
        return true; 
    }

    
    void printBalance() const {
        cout << "Final balance: $" << balance << endl;
    }
};

int main() {
    // Create an object of BankAccount with an initial balance of $0
    BankAccount account(0);

    
    account.deposit(1000);         
    account.withdraw(200);         
    account.withdraw(400);         

    
    account.printBalance();

    return 0;
}
