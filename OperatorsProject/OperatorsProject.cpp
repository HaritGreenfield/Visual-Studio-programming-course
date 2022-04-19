#include <iostream>
using namespace std;

int main()
{
    //arithmetic operators: +, -, *, /, %    are the biggest priority

    cout << 5 + 2 << endl;
    cout << 5 / 2 << endl;
    cout << 5 % 2 << endl;

    // 2nd priority operators: ++, --
    int counter = 7;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    int counter2 = 7; 
    cout << ++counter2 << endl;
    cout << counter2-- << endl;
    cout << counter2 << endl;

   
    system("cls"); // clears the terminal

    //relational operators: <, >, <=, >=, ==, !=   these are 3rd priority operators
    int a = 5, b = 8;
    cout << (a != b);
    system("cls");

    //logical operators: &&, ||, !    these are least priority operators
    //cout << !(a == 5 || b == 5);
    cout << (a == 5 && b == 5 + 3);
    system("cls");

    
    //operators of assignment: =, +=, -=, *=, /=, %=;
    int x = 5;
    x += 7; // a shorter way to write below expression
    //x = x + 7;
    cout << x << endl;
    system("cls");

    // more examples
    int a1 = 5, b1 = 4;
    cout << a1 + (b1++) << endl; 
    cout << (--a1) + b1 << endl;
    system("cls");


    cout << !(true && false) << endl;
    cout << (true && false || true) << endl;

    int r = 7;
    cout << (++r <= 9 && r + 2 >= 10) << endl;
    system("cls");

    int y = 3;
    cout << (y == y++) << endl;
    system("cls");

    float z = 8;
    z += 2;
    cout << z << endl;
    z /= 2;
    cout << z << endl;
    system("cls");

    
    
    
    //Program for swapping values of two variables, this is often asked on job interviews or exams
        
    int a2 = 20;
    int b2 = 10;

    a2 = a2 + b2; //30
    b2 = a2 - b2; //20
    a2 = a2 - b2; //10

    cout << "a2 = " << a2 << endl;
    cout << "b2 = " << b2;


    /* solving the problem by using a third variable
    int temp = a2;
    a2 = b2;
    b2 = temp;

    cout << "a2 = " << a2 << ", b2= " << b2 << endl;
    */
    system("pause>0");
}

