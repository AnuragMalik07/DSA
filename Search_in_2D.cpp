#include "bits/stdc++.h"
using namespace std;

int main()
{
  int n, m, target;
  cin >> n >> m >> target;
  int a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  int r = 0, c = m - 1;
  bool flag = false;
  while (r < n && c >= 0)
  {
    if (a[r][c] == target)
    {
      flag = true;
    }
    else if (a[r][c] > target)
    {
      c--;
    }
    else
    {
      r++;
    }
  }
  if (flag)
    cout << "element found";
  else
    cout << "element not found";
  return 0;
}
