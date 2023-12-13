

#include <iostream>
using namespace std;

int main()
{
    int size; cin >> size;

    int arr[size];

    for (int i= 0; i<size; i++)
    {
        cin >> arr[i];
    }
    if (size == 1) {cout << arr[0]; return 0;}
    
    int repeated_number;
    int max_count = 1;
    int current_count=1;

    for (int i=1; i<size; i++)
    {
        if (arr[i] == arr[i-1]){current_count +=1;}
        else {current_count = 1;}
        
        if (current_count >= max_count) 
            {
                max_count = current_count;
                repeated_number = arr[i];
            }  
    }

    for (int i =0; i< max_count; i++)
    {
        cout << repeated_number<< " ";
    }

}
