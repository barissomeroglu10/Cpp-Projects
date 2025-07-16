/*
In this code, we will get an array from user (whicl called A). Then we will have "reverse" array (which called B).

Developer: Barış Someroğlu
Date: 07.01.2024 / 11:50 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;

    cout << "Please Enter Size of Array: ";
    cin >> N;

    cout << "\n";

    vector<int> A(N), B(N);

    
    for (int i = 0; i < N; i++)
    {
        cout << "Please Enter " << i + 1 << ". Element: ";
        cin >> A[i];
    }

    
    for (int i = 0; i < N; i++)
    {
        B[i] = A[N - 1 - i];
    }

    cout << "\n";

    cout << "Reverse Array is: ";

    for (int i = 0; i < N; i++)
    {
        cout << B[i] << " ";
    }

    cout << "\n";

    return 0;
}
