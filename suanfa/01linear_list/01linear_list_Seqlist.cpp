#include <bits/stdc++.h>
using namespace std;
//^ use template to solve a series of problems which can be solved by linear_list.
//^ like address book,book management system,course management....

//* functions:insert,delete,length,get(search num return value),locate(search value return number),print
//* sequence list
template <class T, int n>
class seqlist
{
public:
    seqlist();
    seqlist(T b[], int i)
    {
        length = i;
        for (int k = 0; k < i; k++)
        {
            a[k] = b[k];
        }
    };
    void insert(T x, int i);
    T Delete(int i);
    int getlength();
    void get(int i);
    int locate(T);
    void print();

private:
    T a[n];
    int length;
};

//^ insert
template <class T, int n>
void seqlist<T, n>::insert(T x, int i)
{
    if ((i < 1) || (i > length + 1))
        throw "location error"; //! i is the location,not the num of the array,a[0]->i=1
    if (length >= n)
        throw "overflow";
    for (int j = length; j >= i; j--)
    {
        a[j] = a[j - 1];
    }
    a[i - 1] = x;
    length++;
}

//^delete
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

//^ get
template <class T, int n>
void seqlist<T, n>::get(int i)
{
    if ((i < 1) || i > length)
        throw "location error";
    else
        cout << a[i - 1].num << " " << a[i - 1].name << " " << a[i - 1].time << endl;
}

//^ locate
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

//^ getlength
template <class T, int n>
int seqlist<T, n>::getlength()
{
    return length;
}

//^ print
template <class T, int n>
void seqlist<T, n>::print()
{
    for (int i = 0; i < length; i++)
    {
        cout << a[i];
    }
    cout << endl;
}

//^ todo_list
class td
{
public:
    int num;
    string name;
    string time;
};
bool operator==(td &k, td &m)
{
    if (k.name == m.name && k.num == m.num)
        return true;
    else
        return false;
}
void operator<<(ostream &out, td &p)
{
    cout << p.num << " " << p.name << " " << p.time << endl;
}

//^ main
int main()
{
    td td1[3] = {{1, "breakfast", "6:00"}, {2, "lunch", "12:00"}, {3, "dinner", "18:00"}};
    td a = {4, "sleep", "24:00"};
    seqlist<td, 100> list(td1, 3);
    list.print();
    list.insert(a, 4);
    list.print();
    cout << list.getlength() << endl;
    list.Delete(2);
    list.print();
    cout << list.getlength() << endl;
    list.get(2);
    cout << list.locate(a) << endl;

    return 0;
}