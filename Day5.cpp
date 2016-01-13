#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
int T;
int a,b,N,n,p,sum;
cin>>T;
for(int i=0;i<T;i++)
{      cin>>a>>b>>N;
sum=a;
    for(int j=0;j<N;j++)
           {
        sum=sum+pow(2,j)*b;
cout<<sum<<" ";
}
cout<<endl;
}     
    return 0;
}





