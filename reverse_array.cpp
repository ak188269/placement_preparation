#include <bits/stdc++.h>
using namespace std;
// reversing an aray
void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; ++i)
        swap(arr[i], arr[n - 1 - i]);
}
int32_t main()
{
    int size;
    //taking size of matrix form user
    cin >> size;
    int arr[size];
    //taking array as input
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    reverse(arr, size);
    //printing array
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
//output 7 6 5 4 3 2 1