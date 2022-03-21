#include <bits/stdc++.h>
using namespace std;
int search(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i + 1;
        }
    }
}
int main()
{
    int a[100];
    int n, key;
    cin >> n >> key;
    cout << search(a, n, key);
    return 0;
}