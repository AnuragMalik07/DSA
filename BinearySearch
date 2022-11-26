#include <iostream>
using namespace std;

int binarysearch(int n, int arr[], int key)
{
  int s = 0;
  int e = n;
  while (s <= e)
  {
    int mid = (s + e) / 2;
    if (arr[mid] == key)
    {
      return mid + 1;
    }
    else if (arr[mid] > key)
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }
  return -1;
}

int main()
{
  cout << "If its '-1' then number is not present" << endl;
  cout << endl;
  int n;
  cout << "enter the size of your contacts list" << endl;
  cin >> n;
  int arr[n];
  cout << ".....please add some contacts....." << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int key;
  cout << "....Enter number to search...." << endl;
  cin >> key;
  cout << "......searching......" << endl;
  cout << binarysearch(n, arr, key) << endl;
  return 0;
}
