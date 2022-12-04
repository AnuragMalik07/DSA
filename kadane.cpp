#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int currentsum = 0;
  int maxSum = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    currentsum += a[i];
    if (maxSum < currentsum)
      maxSum = currentsum;

    if (currentsum < 0)
      currentsum = 0;
  }

  cout << maxSum << endl;
  return 0;
}
