#include <bits/stdc++.h>
using namespace std;
// transpose of matrix
int32_t main()
{
  int size;
  //taking size of matrix form user
  cin >> size;
  int arr[size][size];
  //taking matrix as input
  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size; j++)
      cin >> arr[i][j];
  }
  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size; j++)
    {
      if (j > i)
        swap(arr[i][j], arr[j][i]);
    }
  }
  //printing transope of matrix
  for (int j = 0; j < size; ++j)
  {
    for (int i = 0; i < size; ++i)
      cout << arr[j][i] << " ";
    cout << endl;
  }
  return 0;
}