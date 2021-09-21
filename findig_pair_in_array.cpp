#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
 int size,k;
    //taking size of matrix form user
    cin>>size;
    int arr[size];
    //taking array as input
    for (int i = 0; i < size; ++i)
    {
        cin>>arr[i];
    }
    //taking value of k from input
    cin>>k;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==k)
            cout<<"("<<arr[i]<<","<<arr[j]<<")\n";
        }
    }
    return 0;
}