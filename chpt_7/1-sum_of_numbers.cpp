/*

*/

#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;

    int accumulator = 0;



    // which loop to iterate to contain the total 
    for (int i = 1; i <= number; i++)
    {
        accumulator += number;
    }

    cout << "This is the total: " << accumulator << endl;

    return 0; 

}