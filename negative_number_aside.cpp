#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int size, num, j = 0;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> num;
        if (num < 0)
            cout << num << " ";
        else
            arr[j++] = num;
    }
    for (auto v : arr)
        cout << v << " ";

    return 0;
}