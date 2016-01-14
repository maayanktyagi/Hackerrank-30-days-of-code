#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;
  	Difference(vector<int>& a){
  	elements=a;};
int computeDifference(){
    int d;
    maximumDifference=0;
    for(int i=0;i<elements.size();i++){
        for(int j=1;j<elements.size();j++){
            d=abs(elements[i]-elements[j]);
                if(d>maximumDifference)
                    maximumDifference=d;
        }
    }
    return maximumDifference;
}
};
int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}

