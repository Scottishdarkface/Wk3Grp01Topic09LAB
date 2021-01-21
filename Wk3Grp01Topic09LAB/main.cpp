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
bool isPrime(int n);// check in number is a multiple of a lower prime
int cyclePrimes(void);// check each real number for prime until user stops

int main(void)
{
    P.push_back(2);//add 2 to vector so that we can test against /2 for subsequent numbers without rejecting it
    int choice = 0;//Menu response
    do
    {
        cout << "\n\n\n****************************************"
            "\nWelcome to the Prime Number Checker!"
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
            {
                int aNum = 0;
                cout << "Please enter the number you would like to check(Cycle primes up to number first): " << endl;
                cin >> aNum;
                if (isPrime(aNum))//is it divisible by another prime?
                {
                    cout << aNum << " is a prime number!" << endl;
                }
                else
                {
                    cout << aNum << " is not a prime number" << endl;
                }
                break;
            }
            case 2://Check for primes up to maxSize
            {
                cout << "How many values would you like to check for primes?:";
                cin >> maxSize;
                
                cout << "Checking real whole numbers for primes..." << endl;
                P.clear();//Clear existing list to avoid relisting discovered numbers.
                cyclePrimes();//Checking for prime numbers

                cout << "\n\n" << P.size() << " primes discovered.";

                break;
            }
            case 3://Display known primes
            {
                cout << "Discovered Primes are:\n\n";
                for (auto i = P.begin(); i != P.end(); ++i)//Output Iterator of Vector containing known primes
                {
                    cout << *i << "\n";
                }

                cout << "\n\n" << P.size() << " primes discovered.";
                break;
            }
            case 4://Exit program
                break;
            default:
            {
                cout << "That is not a valid choice." << endl;
                cout << "\nPress any key to continue...";
                _getch();
                break;
            }
        }
    } while (choice != 4);//Exit if 4 is selected

	return 0;
}

bool isPrime(int n)
{
   // int j = 1;//True or false variable
    
    for (auto i = P.begin(); i != P.end(); ++i)//Output Iterator of Vector containing known primes
    {
        if (n % *i == 0)//if given number has a remainder
        {
           // j = 1;//Not prime
            return false;
        }
        //else
        //{
           // j = 0;//prime
        //}
    }

    return true;
    //bool answer = (j == 0) ? true : false;
    //return answer;
}

int cyclePrimes(void)
{
    for (int i = 2; i < maxSize; i++)//2 is the first prime number, check each number up to maxSize
    {
        if (isPrime(i))//Is it prime?
        {
            P.push_back(i);//if true, add to vector
            cout << i << " ";
        }
    }
    return 0;
}