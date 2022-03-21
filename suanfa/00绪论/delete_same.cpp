#include <bits/stdc++.h>
using namespace std;
//~ a[] is a non-decreasing array,n is initial length of a[]
//^ solve 1
void deletesame1(int a[], int n)
{
    int *b = new int[n];
    b[0] = a[0];
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != b[k])
        {
            b[k] = a[i];
            k++;
        }
    }
    memcpy(a, b, sizeof(int) * k);
    delete[] b;
}
//^ solve 2
void deletesame(int a[], int n)
{
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i + 1] != a[i])
        {
            a[k] = a[i + 1];
            k++;
        }
    }
}