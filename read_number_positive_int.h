#include <iostream>
using namespace std; 

int ReadNumberPositiveInt(string msgToUser){

    int number = 0;
  
    // while number is not positive loop
    while (number < 1)
    {
        cout << msgToUser << "\n";
        cin >> number;
    }

    // do
    // {
    //      cout << msgToUser << "\n";
    //     cin >> number;
    // } while (number < 1);
    
       

    return number;
}