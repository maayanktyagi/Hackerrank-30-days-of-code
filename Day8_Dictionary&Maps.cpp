#include<iostream>
#include<map>
#include<string>
#include<cstdlib>

using namespace std;
int main(){
map<string,int> a;
map<string,int>::iterator it;
int number;
string name;
string t;
int n;
cin>>n;

for(int i=0;i<n;i++)
{
    cin.ignore();
    getline(cin,name);
    cin>>number;
    a.insert(pair<string,int>(name,number));
}
    cin.ignore();
while(getline(cin,name))
   {
    if(a.count(name) !=0)
        cout<<name<<"="<<a.find(name)->second<<endl;
    else
        cout<<"Not found"<<endl;
        }
return 0;
}









