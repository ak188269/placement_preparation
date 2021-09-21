#include <bits/stdc++.h>
using namespace std;
#define int long long
int arr[100000];
int carry = 0;
void multiply(int i, int &idx)
{
    for (int j = 0; j < idx; ++j)
    {
        int mul = arr[j] * i + carry;
        arr[j] = mul % 10;
        carry = mul / 10;
    }
    //if carry has more than one digit left
    while (carry)
    {
        arr[idx++] = carry % 10;
        carry /= 10;
    }
}
void factorial(int n, int &idx)
{
    for (int i = 3; i <= n; i++)
    {
        // cout<<"idx is "<<idx<<endl;
        multiply(i, idx);
    }
}
int32_t main()
{
    int n, idx = 1;
    //taking number input from user
    cin >> n;
    arr[0] = 2;
    factorial(n, idx);
    //printing array in reverse order
    for (int i = --idx; i >= 0; --i)
        cout << arr[i];

    return 0;
}