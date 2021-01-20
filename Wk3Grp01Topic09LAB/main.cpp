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
        *cout statements
    Selection Menu
        *switch case
        1.Enter a number
            isEven(int i)
            isPrime(int i)
        2.Cycle through numbers
            cyclePrimes(void)
        3.View found numbers
            display pointer array of found primes
*/
#include <iostream>
#include <string>
#include <conio.h> //_getch()
using std::string;
using std::cout;
using std::cin;
using std::endl;

bool isEven(int i);//check if number divides by 2
bool isPrime(int i);// check in number is a multiple of a lower prime
void cyclePrimes(void);// check each real number for prime until user stops

int main(void)
{
    int n;//variable to input array
    int* P = new int(n);//Dynamic array for discovered primes

    int choice;//Menu response
    do
    {
        cout << "Welcome to the Prime Number Checker!"
            "\nBrought to you by Chris Pacheco, Nathalie Davis, and Zach Murray"
            "\n\nPlease make a selection to continue:"
            "\n\n1)Check if a single number is prime"
            "\n\n2)Cycle through all real numbers checking for primes"
            "\n\n3)View discovered primes"
            "\n\n4)Exit" << endl;
        cin >> choice;

        switch (choice)//Choice decision branch
        {
        case 1:
            int aNum = 0;
            cout << "Please enter the number you would like to check: " << endl;
            cin >> aNum;
            if (isdigit(aNum) && (aNum % 2 != 0))//is it a whole number? Can it be divided evenly?
                    isPrime(aNum);//is it divisible by another prime?
            break;
        case 2:
            cout << "Checking all real whole numbers for primes..." << endl;
            cyclePrimes();

            break;
        case 3:

            break;
        case 4:

            break;
        default:
            cout << "That is not a valid choice." << endl;
            cout << "\nPress any key to continue...";
            _getch();
            break;
        }
    } while (choice != 4);

	return 0;
}

bool isEven(int i)
{
   if (i % 2) return 
}

bool isPrime(int i)
{

}

void cyclePrimes(void)
{
    for (int n = 0; n < 1000 - 1; n++)
    {
        if (isdigit(n) && (n % 2 != 0))//is it a whole number? Can it be divided evenly?
            if (isPrime(n))

    }
}
