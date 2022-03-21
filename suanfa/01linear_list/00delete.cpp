//^删除数组内指定位置的元素
//^ A[10]={2,4,6,1,7,23,9,12,3,8}
#include <bits/stdc++.h>
using namespace std;
void DeleteElement(int A[], int n, int i)
{
    for (int k = i - 1; k < n - 1; k++)
    {
        A[k] = A[k + 1];
    }
}
int main()
{
    int A[10] = {2, 4, 6, 1, 7, 23, 9, 12, 3, 8};
    DeleteElement(A, 10, 3);
    for (int i = 0; i < 9; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
//! try to use "try-catch-throw" to handle an exception