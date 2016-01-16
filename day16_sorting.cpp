#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
template <class T>
void merge_sort(T array[],int beg, int end){
    if (beg==end){
        return;
    }
    int mid = (beg+end)/2;
    merge_sort(array,beg,mid);
    merge_sort(array,mid+1,end);
    int i=beg,j=mid+1;
    int l=end-beg+1;
    T *temp = new T [l];
    for (int k=0;k<l;k++){
        if (j>end || (i<=mid && array[i]<array[j])){
            temp[k]=array[i];
            i++;
        }
        else{
            temp[k]=array[j];
            j++;
        }
    }
    for (int k=0,i=beg;k<l;k++,i++){
        array[i]=temp[k];
    }
    delete temp;
}

int main() {
long int n,i,j,d,temp,inner_d;
long long int answer=1000000000000;
cin>>n;
long int A[n];
for(int k=0;k<n;k++){
    cin>>A[k];
}

merge_sort(A,0,n-1);

    for(int l=0;l<n;l++){
        inner_d=abs(A[l]-A[l+1]);
           if(inner_d<answer){
              answer=inner_d;
              }
         }
    for(int b=0;b<n;b++){
         int d=abs(A[b]-A[b+1]); 
        if(d==answer){
           cout<<A[b]<<" "<<A[b+1]<<" ";
}

}

    return 0;
}
