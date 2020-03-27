//Bank Hacking
//Author: Zack Driscoll

#include <iostream>

using namespace std; 

//Prototype our funcitons - kinda like declaring variables, we declare functions too
void SwapAccountsRef(int& firstAccount, int& secondAccount);
void SwapAccountsLocal(int firstAccount, int secondAccount);

int main()
{
	//Display title
	cout << "\n\n\t\t *** Hacking the Bank *** \n\n";

	//Create accounts and asign values
	int bankAccount = 999999;
	int hackerAccount = 10;

	//Print out accounts
	cout << "\nFrom the Main Function: The bank's account has $" << bankAccount << endl;
	cout << "From the Main Function: The hacker's account has $" << hackerAccount << endl;

	//Call the local swap fuction
	SwapAccountsLocal(bankAccount, hackerAccount);

	//Print out accounts
	cout << "\nFrom the Main Function: The bank's account has $" << bankAccount << endl;
	cout << "From the Main Function: The hacker's account has $" << hackerAccount << endl;

	//Call the reference swap fuction
	SwapAccountsRef(bankAccount, hackerAccount);

	//Print out accounts
	cout << "\nFrom the Main Function: The bank's account has $" << bankAccount << endl;
	cout << "From the Main Function: The hacker's account has $" << hackerAccount << endl;

	return 0;
}

//The params are passed in by value by default
//which means they are a copy only.
void SwapAccountsLocal(int firstAccount, int secondAccount)
{
	//Print out current accounts locally
	cout << "\nFrom the SwapAccountsLocal Function: The bank's account has $" << firstAccount << endl;
	cout << "From the SwapAccountsLocal Function: The hacker's account has $" << secondAccount << endl;

	//Do the local swap of the values
	//Have our temp variable hold the first score
	int temp = firstAccount;
	firstAccount = secondAccount;
	secondAccount = temp;

	//Print out accounts
	cout << "\nFrom the SwapAccountsLocal Function: The bank's account has $" << firstAccount << endl;
	cout << "From the SwapAccountsLocal Function: The hacker's account has $" << secondAccount << endl;

}

//Swap the code using references instead of locally
void SwapAccountsRef(int& firstAccount, int& secondAccount)
{
	//Print out current accounts through refs
	cout << "\nFrom the SwapAccountsRef Function: The bank's account has $" << firstAccount << endl;
	cout << "From the SwapAccountsRef Function: The hacker's account has $" << secondAccount << endl;

	//Do the ref swap of the values
	//Have our temp variable hold the first score
	int temp = firstAccount;
	firstAccount = secondAccount;
	secondAccount = temp;

	//Print out accounts
	cout << "\nFrom the SwapAccountsRef Function: The bank's account has $" << firstAccount << endl;
	cout << "From the SwapAccountsRef Function: The hacker's account has $" << secondAccount << endl;

}