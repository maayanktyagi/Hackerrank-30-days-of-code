#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    
int array[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>array[i][j];
        }
        
    }
    int answer=-63;
            int sum;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){            
                sum=array[i][j]+array[i][j+1]+array[i][j+2]+array[i+1][j+1]+array[i+2][j]+array[i+2][j+1]+array[i+2][j+2];
            if(sum>answer)
                answer=sum;
        }
    }
    cout<<answer;
return 0;
}
