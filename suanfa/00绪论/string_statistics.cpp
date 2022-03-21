#include <bits/stdc++.h>
using namespace std;
void stat(char *s, int num[])
{
    memset(num, 0, 128 * 4);
    while (*s != '\0')
    {
        num[(int)(*s)]++;
        s++;
    }
}