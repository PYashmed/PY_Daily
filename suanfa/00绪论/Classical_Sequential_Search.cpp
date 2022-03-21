#include <bits/stdc++.h>
using namespace std;
int search(int a[], int n, int key)
{
    //^ 查找范围n，查找目标key
    a[0] = key;
    int i;
    for (i = n; a[i] != key; i--)
    {
    };
    return i;
}
// this solve omits a comparison(i<n),saves time
// compared with search0
int search0(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i + 1;
        }
    }
}
//^ 数组中key重复
int search1(int a[], int n, int key, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        if (a[i] == key)
        {
            return i + 1;
        }
    }
    return 0;
}