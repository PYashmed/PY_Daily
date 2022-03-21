#include <bits/stdc++.h>
using namespace std;
//^ define node
template <class T>
struct node
{
    T data;
    struct node<T> *next;
};

//^link node construct linked list
template <class T>
class linklist
{
public:
    linklist();
    linklist(T a[], int n);
    int length;
    T get(int n);
    int locate(T);
    void insert(T, int);
    T Delete(int);
    ~linklist();

private:
    node<T> *first;
};

//^ empty list
template <class T>
linklist<T>::linklist()
{
    first = new node<T>;
    first->next = NULL;
}

//^ constructor----first interpolation
/* template <class T>
linklist<T>::linklist(T a[], int n)
{
    //^ initialize first node
    first = new node<T>;
    first->next = NULL;
    //! continue building (first interpolation)
    for (int i = 0; i < n; i++)
    {
        //^ build new node
        node<t> *s = new node<T>;
        s->data = a[i];
        //^ link new node (next first node)
        s->next = first->next;
        first->next = s;
    }
} */

//^ contrustor end interpolation
template <class T>
linklist<T>::linklist(T a[], int n)
{
    //^ initialize first node
    node<T> *first = new node<T>;
    node<T> *r = first;
    //! continue building (end interpolation)
    for (int i = 0; i < n; i++)
    {
        node<T> *s = new node<T>;
        s->data = a[i];
        s->next = NULL;
        r->next = s;
        r = s;
    }
};

//^ destructor
