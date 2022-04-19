#include <iostream>
using namespace std;

int main()
{   
    /*
    * this codeblock takes letters and cyphers ASCII numbers. 
    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);
    */

    // this codeblock decyphers ASCII numbers into letters.
    int c1, c2, c3, c4, c5;
    cout << "Enter 5 numbers: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << char(c1) << "" << char(c2) << "" << char(c3) << "" << char(c4) << "" << char(c5);

    system("pause>0");
}

