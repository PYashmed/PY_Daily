#include <bits/stdc++.h>
using namespace std;
int search(int a[], int n, int key)
{
    //^ ���ҷ�Χn������Ŀ��key
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
//^ ������key�ظ�
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