#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bitset>
#include<math.h>
using namespace std;
string DectoBinary(int n){
    string a;
    a.empty();
    long b=1,c=0;
    while(n!=0 && n<pow(2,31)){
        c=n%2;
        a=to_string(n%2) + a;
        b=b*10;
        n=n/2;
    }
    return a;
}

int main() {
    
    int t;
    int n;
    cin>>t;
    for(int i=0;i<t;i++){
         cin>>n;
            string ans=DectoBinary(n);
            cout<<ans<<endl;
        
       
    }
    return 0;
}
