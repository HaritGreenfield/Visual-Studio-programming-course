#include <iostream>
using namespace std;

int main()
{
    //ASCII example. ASCII uses 7 bits to represent each character, 128 characters.
    //Remember, ASCII represents each character with a number, so it holds its numeric match.
    // We can also get the numeric match by the casting operator: int('a');
    cout << (int)'a' << endl;
    cout << int('a') << endl;
    cout << int('A') << endl;

    cout << char(65) << endl;


/*
    int intMax = INT_MAX;
    cout << intMax << endl;
    cout << intMax + 1;
*/

    /*
    int yearOfBirth = 1989;
    char gender = 'm';
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 45678945856;

    cout << "Size of int is " << sizeof(int) << " bytes\n";
    //-1,-2,-3,...,-2147483648
    cout << "Int min value is " << INT_MIN << endl;
    //0,+1,+2,+3,...,+2147483647
    cout << "Int max value is " << INT_MAX << endl;

    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
    cout << "UInt max value is " << UINT_MAX << endl;
    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";
    */
    
    /*
    float annualSalary;
    cout << "Please enter your annual salary ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In 10 years you will earn " << annualSalary * 10;

    char character = 'a';
    */
    system("pause>0");
}
