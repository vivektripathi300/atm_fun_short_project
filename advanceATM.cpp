#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ATM
{
private:
    int pin = 2002;
    double balance = 50000;
    
 public:
    bool checkpin(int enterpin)
    {
        if (enterpin == pin)
        {
            return true;
        }
        else
        {
            cout << "you are enter wrong input";
            return false;
        }
    }

    void checkbalance()
    {
        cout << "your balance is:" << balance << endl;
    }

    // deposite...
    void deposite(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            transactionhistory.push_back("Deposited: " + to_string(amount));
            cout << "your amount deposite sucessfully!!\t" << amount << endl;
        }
        else
        {
            cout << "invalid amount deposite";
        }
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            transactionhistory.push_back("Withdrawn: " + to_string(amount));
            cout << "withdraw amount sucessfully!!\t" << amount << endl;
        }
        else
        {
            cout << "invalid amount withraw !!" << endl;
        }
    }
    void changepin()
    {
        int newpin;
        cout << "enter your newpin";
        cin >> newpin;
        pin = newpin;
        cout << "your pin change successfuly!!\t" << pin;
    }

    void ministatement(int num=5)
    {
        cout << "your statement is:" << endl;
        if (transactionhistory.empty())
        {
            cout << "no transaction available" << endl;
        }
        else
        {
            int count = 0;
             for (int i = transactionhistory.size() - 1; i >= 0 && count < num; i--)
            {
                cout << transactionhistory[i] << endl;
                count++;
            }
        }
    }

    void depositcheque(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "successfully deposite\t" << amount << endl;
            transactionhistory.push_back("cheque deposit" + to_string(amount));
        }
        else
        {
            cout << "not valid cheque!!" << endl;
        }
    }

};

int
main()
{
    ATM atm;
    int enterpin;
    double amount ;
    int choice;

    cout << "welcome in atm machine"<<endl;

    cout << "enter your pin here!";
    cin >> enterpin;
    if (!atm.checkpin(enterpin))
    {
        return 0;
    }

    do{
         
    
        cout << "ATM MENU USE::" << endl;
        cout << "1.check balance" << endl;
        cout << "2.deposite" << endl;
        cout << "3.withdraw" << endl;
        cout << "4.change pin" << endl;
        cout << "5. deposite cheque" << endl;
        cout << "6. mini --- statement" << endl;
        cout << "7.exit" << endl;

        cout<<"enter your choice";
        cin>>choice;

        switch (choice)
        {
        case 1:
            atm.checkbalance();
            break;

        case 2:
            cout << "enter your amount";
            cin >> amount;
            atm.deposite(amount);
            break;

        case 3:
            cout << "enter your amount";
            cin >> amount;
            atm.withdraw(amount);
            break;

        case 4:
            atm.changepin();
            break;
        case 5:
            cout << "enter amount to deposite by cheque:";
            cin >> amount;
            atm.depositcheque(amount);
            break;

        case 6:
            atm.ministatement();
            break;
        case 7:
            cout << "thanks try again:";
            break;

        default:
            cout << "error !!!!!";
            break;
        }
    } while (choice != 7);

     return 0;
}