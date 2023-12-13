#include <iostream>
using namespace std;


bool areEqual(int arr1[], int size1, int arr2[], int size2)
{
    if (size1!=size2) {return false;}

    for (int i = 0; i<size1; i++)
    {
        if (arr1[i] != arr2[i]) 
        {
            return false;
        }
    }
    return true;
}



int main()
{
    int size1; cin >> size1;
    int arr1[size1]; 
    for (int i = 0; i<size1; i++)
    {
        cin >> arr1[i];
    }

    int size2; cin >> size2;
    int arr2[3]; 
    for (int i = 0; i<size2; i++)
    {
        cin >> arr2[i];
    }
    if (areEqual(arr1, size1, arr2, size2)) {cout << "equal";}
    else {cout << "Not equal" << endl;}
}
