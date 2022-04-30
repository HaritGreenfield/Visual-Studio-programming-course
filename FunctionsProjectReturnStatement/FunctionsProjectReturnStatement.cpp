#include <iostream>
using namespace std;

bool isPrimeNumber(int number) {
    bool isPrimeFlag = true;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) 
            return false;
    }
    return true;
}

void main()
{
    for (int i = 1; i <= 100000; i++) {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
            cout << i << " is a prime number\n";
    }

    system("pause>0");
}

