/*
	Question # 2 :
			Define a class in C++ to represent a bank account include 
	the data members or member function.
			Write the program to test the class.
*/
#include <iostream>
#include <cstring>
#include <iomanip>     // Create manipulator function for point values.
using namespace std;

class Bank
{
	private:           // Private data members for hiding of info.
		string name;
		int num;
		string account_type;
		int account_balance;
		
	public:            // Public data members which have all functions are involved.
		Bank()         // => Default Contsructor (Initialization).
		{
			name = "";
			num = 0;
			account_type = "";
			account_balance = 0;
		}
		
		// Setters.
		void setName(string a)
		{
			name = a;
		}
		
		void setNumber(int n)
		{
			num = n;
		}
		
		void setAccount_type(string Type)
		{
			account_type = Type;
		}
		
		void setAccount_balance(int Balance)
		{
			account_balance = Balance;
		}
		
		// Getters.
		string getName()
		{
			return name;
		}
		
		int getNumber()
		{
			return num;
		}
		
		string getAccount_type()
		{
			return account_type;
		}
		
		int getAccount_balance()
		{
			return account_balance;
		}
		
		// Create a function of deposit an amount.
		void deposit_amount(float b, float total)
		{
			cout << "\t   Deposit an Amount.\n";
			cout << "\t   ------------------\n";
			
			cout << "Enter an amount which you want to have deposit : ";
			cin >> b;
			cout << "Successfully, Deposited.\n";
			
			cout << fixed << showpoint << setprecision(2) << endl;
			total = account_balance + b;
			cout << "And your Saving account is " << total << ".\n";
		}
		
		// Create a function of withDraw an amount.
		void withDraw_amount(float c, float remain)
		{
			cout << "\t   WithDrawn an Amount.\n";
			cout << "\t   --------------------\n";
			
			cout << "Enter an amount which you want to have withDrawn : ";
			cin >> c;
			cout << "Successfully, WithDraw Money.\n";
			
			cout << fixed << showpoint << setprecision(2) << endl;
			remain = account_balance - c;
			cout << "And your Current account is " << remain << ".\n";
		}
		
		// That function which display the personal info.
		void display()
		{
			cout << "\t   Your Information.\n";
			cout << "\t   -----------------\n";
			
			cout << "Name : " << name;
			cout << "Current Balance : " << account_balance << endl;
		}
	
};

//**********************************
// Main Program to test the class. *
//**********************************
int main()
{
	Bank point;
	int choice;
	int w, x, y, z;
	char decision;	
	
	cout << "********************_BANK ACCOUNT_********************\n\n";
	
	// Call all setters function in main.
	point.setName("Fakher Zaman.\n");     // Name of the depositer.
	point.setNumber(12345);               // Account number.
	// type of account (C for current or S for saving).
	point.setAccount_type("Current type, Saving type.\n");
	point.setAccount_balance(50000);      // Balance amount in the account.
	
	// Call all getters function in main.
	point.getName();
	point.getNumber();
	point.getAccount_type();
	point.getAccount_balance();
	
	do          // Do while loop create to run again of the program.
	{
		cout << "What you want to do ---" << "\n\n";
	
		cout << "\t1. View Your Information.\n";
		cout << "\t2. Deposit an Amount.\n";
		cout << "\t3. Withdraw an Amount.\n";
		cout << "\nEnter your choice 1, 2 or 3 : ";
		cin >> choice;
		cout << endl;
	
		switch(choice)       // Switch Statement.
		{
			case 1:
				point.display(); 
			break;
			
			case 2:
				point.deposit_amount(w, x);
			break; 
		
			case 3:
				point.withDraw_amount(y, z);
			break;
		
			default:
			{
				cout << "Error! You have not choose the list numbers,\n";
				cout << "Please Press 1, 2 or 3...\n";
			}
		}
		
		cout << "\nDo you want to Run again this program ?.\n";
		cout << "Please, Enter Y for yes and N for No.\n";
		cin >> decision;	
	}while(decision == 'Y' || decision == 'y');
	
	cout << "\n______________________________________________________\n\n";
	
	
	return 0;
	
}
