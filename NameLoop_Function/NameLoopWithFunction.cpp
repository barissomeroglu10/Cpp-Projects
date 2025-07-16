/*
In this code, we will get a number and name from user. Then we will write the name on the screen as many numbers as.

Developer: Barış Someroğlu
Date: 25.03.2024 / 10:00 pm
*/

#include <iostream>
#include <string> // to use string variable, this library should be in the code

using namespace std;

// Function prototype
void NameLoop(int, string);

int main()
{
    string Name;
    int LoopNumber;

    cout << "Please Enter a Name: ";
    cin >> Name;

    cout << "\n";

    cout << "Please Enter Number to Loop Count: ";
    cin >> LoopNumber;

    cout << "\n";

    // Call the function
    NameLoop(LoopNumber, Name);

    return 0;
}

// Function definition, if you want use write something on the console you should use "void" variable for function
void NameLoop(int LoopNumber, string Name)
{
    for (int i = 1; i <= LoopNumber; i++)
    {
        cout << i << ". " << Name << endl; // Output the name to the console
    }
}
