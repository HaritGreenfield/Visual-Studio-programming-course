#include <iostream>
using namespace std;

void myFunction() {
    int* ptr = new int[50000];
    ptr[2] = 10;
    cout << "Hi, I am = " << ptr[2];
    delete [] ptr;
}

int main()
{
    myFunction();
    



    //int savedMoney[5] = {100,200,300,400,500};

    //int total = 0;
    //for (int i = 0; i < 5; i++)
    //    total += savedMoney[i];

    //cout << "Total: " << total;

    system("pause>0");
    return 0; 
}

