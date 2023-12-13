#include <iostream>
using namespace std;


int main()
{

    int size; cin >> size;
    int arr[size];
    int sum = 0; 

    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int mean = sum/size;

    for (int i=0; i<size; i++)
    {
        if (arr[i] >=mean)
        {
            cout << arr[i]<<" ";
        }
    }

}