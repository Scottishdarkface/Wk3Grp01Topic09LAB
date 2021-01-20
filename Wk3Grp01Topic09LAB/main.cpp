/*
Chris Pacheco
Nathalie Davis
Zach Murray
CIS210
Week 3 Lab: Prime Numbers
20 Jan 2021
Pseudocode: 
Steps
    Greeting
    Selection Menu
    
*/
#include <iostream>
#include <string>
#include <conio.h> //_getch()
using std::string;
using std::cout;
using std::cin;
using std::endl;

int isEven(int i);
bool isPrime(int i);

int main(void)
{

	cout << "\nPress any key to continue...";
	_getch();

	return 0;
}

int isEven(int i)
{
    int n, i;
    bool isPrime = true;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "This is a prime number" << endl;
    else
        cout << "This is not a prime number" << endl;
    system("pause");
    return 0;
}

bool isPrime(int i)
{

}