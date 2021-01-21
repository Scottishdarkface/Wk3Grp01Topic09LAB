/*
Chris Pacheco
Nathalie Davis
Zach Murray
CIS210
Week 3 Lab: Prime Numbers
20 Jan 2021
Pseudocode: 
Steps
   Done-Greeting
        *cout statements
    Done-Selection Menu
        *switch case
        1.Enter a number
            isEven(int i)
            isPrime(int i)
        2.Cycle through numbers
            cyclePrimes(void)
       Done-3.View found numbers
            display pointer array of found primes
*/
#include <iostream>
#include <string>
#include <conio.h> //_getch()
#include <vector> // vector (array type) for discovered primes
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

//Variables
int maxSize = 1000;//Limiter for prime checking to avoid crash
vector<int> P;

//Function Prototypes
bool isEven(int i);//check if number divides by 2
bool isPrime(int i);// check in number is a multiple of a lower prime
void cyclePrimes(void);// check each real number for prime until user stops

int main(void)
{
    int n;//variable to input array

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
        case 1://Check a single number for prime
            int aNum = 0;
            cout << "Please enter the number you would like to check: " << endl;
            cin >> aNum;
            if (isdigit(aNum) && (aNum % 2 != 0))//is it a whole number? Can it be divided evenly?
                isPrime(aNum);//is it divisible by another prime?
            else
                cout << aNum << "is not a prime number";

            break;
        case 2://Check for primes up to maxSize
            cout << "Checking all real whole numbers for primes..." << endl;
            P.clear();//Clear existing list to avoid relisting discovered numbers.
            cyclePrimes();//Checking for prime numbers

            break;
        case 3://Display known primes
            cout << "Discovered Primes are:\n\n";
            for (auto i = P.begin(); i != P.end(); ++i)//Output Iterator of Vector
                cout << *i << "\n";

            break;
        case 4://Exit program
            break;
        default:
            cout << "That is not a valid choice." << endl;
            cout << "\nPress any key to continue...";
            _getch();
            break;
        }
    } while (choice != 4);//Exit if 4 is selected

	return 0;
}

bool isPrime(int i)
{

}

void cyclePrimes(void)
{
    for (int i = 3; i < maxSize - 1; i++)//3 is the first prime number
    {
        if (isdigit(n) && (n % 2 != 0))//is it a whole number? Can it be divided evenly?
            if (isPrime(n))

    }
}
