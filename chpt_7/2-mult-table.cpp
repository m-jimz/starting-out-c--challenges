#include <iostream>
#include <string>
using namespace std;

int main()
{
    // intialize q for what num for the times table
    int q;
    cout << "Enter a number to be multiply: ";
    cin >> q;


    // for loop is used to iterate
    for (int i = 1; i < 10; i++)
    {
        int result =  i * q;
        cout << i << " x " << q << " = " << result << endl;
    }
    

    return 0; 
}