#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int find_gcd(int a,int b){
    //Write base condition
    if(a==b)
        return a;
    else if(a>b)
        return find_gcd(a-b,b);
        else
        return find_gcd(a,b-a);
}
int main() {
    int a,b;
    cin>>a>>b;
    int gcd=find_gcd(a,b);
    cout<<gcd;
    return 0;   
}
