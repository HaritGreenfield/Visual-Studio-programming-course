#include <iostream>
using namespace std;

void function();

int main()
{
    cout << "Hello from main()\n";
    function();
    function();
    function();


    system("pause>0");
}

void function() {
    cout << "Hello from function()" << endl;
}