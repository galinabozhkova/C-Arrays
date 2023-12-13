#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int find_min_difference(int arr[], int size)
{
    if (size<=1){return 0;}
    
    int min_difference = INT_MAX;

    for (int i = 0; i<size; i++)
    {
        for (int j = 0; j<size; j++)
        {
            if (i!=j && abs(arr[i]- arr[j])<min_difference)
            {
                min_difference = abs(arr[i]- arr[j]);

            }
        }
    }
    return min_difference;
}


int main()
{
    int size; cin >> size;


    int arr[size];
    int min_diff;

    for (int i = 0; i<size; i++) {cin >> arr[i];}

    cout << find_min_difference(arr, size);

}
