#include<bits/stdc++.h>
using namespace std;
class interger{
    int a,b;
    int gcd(int a,int b);
    int lcm(int a,int b);
    
};
int interger::gcd(int a,int b){
    return b == 0 ? a : gcd(b, a % b);
}
int interger::lcm(int a,int b){
    return b == 0 ? a : interger::gcd(b, a % b);
}