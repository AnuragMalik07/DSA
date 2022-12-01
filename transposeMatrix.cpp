#include <iostream>
using namespace std;
int main()
{
    int N = 3;
    int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int j = 0; j < N; j++)
    {
        for (int i = j; i < N; i++)
        {
            // swap
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    // print transpose
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
        {
            cout << A[i][j] << " ";
        }
        cout << " \n ";
    }
    return 0;
}
