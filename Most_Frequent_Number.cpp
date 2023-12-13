
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void clearArray (int array[], int size)
{
    for (int i=0; i<size; i++)
    {
        array[i] = -1;
    }
}

bool check_if_element_is_present(int array[], int size, int element)
{
    for (int i= 0; i<size; i++)
        {
            if (array[i] == element) {return true;}
        }
    return false;
}

int main()
{
    int size; cin >> size;

    int arr[size];
    int arr1[size];

    for (int i= 0; i<size; i++)
    {
        cin >> arr[i];
    }

    int max_count = 0;
    int count = 0;

    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if (arr[j] == arr[i])
            {
                count += 1;              
            }
        }
        if (count > max_count)
            {
                clearArray(arr1, size);
                arr1[i] = arr[i];
                max_count = count;
            }
        else if (count == max_count)
            {
                if (check_if_element_is_present(arr1, size, arr[i])==false)
                {
                    arr1[i] = arr[i];
                }
            }
        count = 0;



    }

    int n = sizeof(arr1)/sizeof(arr[0]); 
    sort(arr1, arr1+n);
          
    for (int i =0; i< n; i++)
    {
        if (arr1[i]!= -1)
        {
            cout <<arr1[i] <<" ";
        } 
    }

}
