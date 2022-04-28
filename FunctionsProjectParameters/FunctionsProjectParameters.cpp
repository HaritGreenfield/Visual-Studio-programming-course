#include <iostream>
using namespace std;

void introduceMe(string name, string city, int age=0) {
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if(age!=0)
    cout << "I am " << age << " years old" << endl;

}

void main()
{
    string name1, city1;
    int age1;
    cout << "Name: ";
    cin >> name1;
    cout << "City: ";
    cin >> city1;
    cout << "Age: ";
    cin >> age1;
    introduceMe(name1, city1, age1);
    /*introduceMe("Harit", "Sarpsborg", 32);
    introduceMe("Anna", "NY");*/


    system("pause>0");
}

