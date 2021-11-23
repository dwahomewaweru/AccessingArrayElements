// AccessingArrayElements.cpp 

#include <iostream>
using namespace std;

int main()
{
    int myNums[] = { 1, 2, 3, 4, 5 }; //Declare and initialize an interger array of size five
    for (int i = 0; i<5; i++)
    {
        cout << myNums[i] << endl; // output values stored in the array 
    }
return 0;
}
    