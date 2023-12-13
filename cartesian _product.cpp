#include <iostream>
using namespace std;

void print_array (int array[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << array[i] << " " ;
    }
}

void create_array(int array[], int size)
{
    for (int i = 0; i<size; i++)
    {
        cin >> array[i];
    }
}

int main()
{
    int size; cin >> size;
    int arr[size];

    create_array(arr, size);

    int result_array[size*size];
    int index = 0;

    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            result_array[index] = arr[i]*arr[j];
            index+=1;
        }
    }

    print_array(result_array, size*size);
}