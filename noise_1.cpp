#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    char symbol;
    string number;
    cin >> symbol;

    while (symbol !=46)
    {
        
        if (char(symbol)>=48 && char(symbol)<=57)
        {
            number += symbol;
            
        }
        cin >>symbol;



    }

    int num = stoi(number);

    cout<<sqrt(num);

    
}