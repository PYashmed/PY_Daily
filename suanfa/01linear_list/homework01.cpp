#include <iostream>
using namespace std;
template <class T, int n>
class seqlist
{
public:
    seqlist()
    {
        a[n] = {0};
        length = 0;
    };
    void insert(T x, int i);
    T Delete(int i);
    int locate(T);
    void print();

private:
    T a[n];
    int length;
};

template <class T, int n>
void seqlist<T, n>::insert(T x, int i)
{
    if ((i < 1) || (i > length + 1))
        throw "location error";
    if (length >= n)
        throw "overflow";
    for (int j = length; j >= i; j--)
    {
        a[j] = a[j - 1];
    }
    a[i - 1] = x;
    length++;
}
template <class T, int n>
T seqlist<T, n>::Delete(int i)
{
    if ((i < 1) || (i > length))
        throw "location error";
    if (length == 0)
        throw "underflow";
    T t = a[i - 1];
    for (int k = i; k < length; k++)
    {
        a[k - 1] = a[k];
    }
    length--;
    return t;
}

template <class T, int n>
int seqlist<T, n>::locate(T x)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (a[i] == x)
            return i + 1;
    }
    return 0;
}

template <class T, int n>
void seqlist<T, n>::print()
{
    for (int i = 0; i < length - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << a[length - 1];
    cout << endl;
}

int main()
{
    seqlist<int, 100> a;
    seqlist<char, 100> b;
    seqlist<double, 100> c;
    char x, y, z;
    int m, l;
    double n;
    while (cin >> x)
    {
        if (x == 'a')
        {
            cin >> y;
            switch (y)
            {
            case 'i':
                cin >> l >> m;
                a.insert(m, l);
                break;
            case 'd':
                cin >> l;
                a.Delete(l);
                break;
            case 'p':
                a.print();
                break;
            case 'l':
                cin >> m;
                cout << a.locate(m) << endl;
                break;
            default:
                break;
            }
        }
        else if (x == 'b')
        {
            cin >> y;
            switch (y)
            {
            case 'i':
                cin >> l >> z;
                b.insert(z, l);
                break;
            case 'd':
                cin >> l;
                b.Delete(l);
                break;
            case 'p':
                b.print();
                break;
            case 'l':
                cin >> z;
                cout << b.locate(z) << endl;
                break;
            default:
                break;
            }
        }
        else if (x == 'c')
        {
            cin >> y;
            switch (y)
            {
            case 'i':
                cin >> l >> n;
                c.insert(n, l);
                break;
            case 'd':
                cin >> l;
                c.Delete(l);
                break;
            case 'p':
                c.print();
                break;
            case 'l':
                cin >> n;
                cout << c.locate(n) << endl;
                break;
            default:
                break;
            }
        }
    }
    return 0;
}