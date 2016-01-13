#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
double m;
int t;
int x;
int fprice;       
cin>>m;       
cin>>t;
cin>>x;
double tax=m*t*0.01;
double tip=x*m*0.01;
double f=tax+tip+m;
fprice =round(f);
cout<<"The final price of the meal is $"<<fprice<<".";
return 0;
}
