#include<iostream>
using namespace std;

int main()
{
    // 1D Array
    // int arr[5] = {1, 2, 3, 4, 5};
    // cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;

    // 2D Array
    int arr[3][5];

    arr[1][3] = 6;
    // cout << arr[1][3];
    
    cout << arr[1][5]; 
    // It will give garbage value as we haven't assigned any value

    return 0;
}