
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int l,r;
    cin>>l>>r;
    double value,value2;
    value=log(r*(r-1))/2;
    if(l-2>0) {
        value2=log((l-2)*(l-1))/2;
    }
    else {
        value2=0;
    }
    cout<<exp(value)-exp(value2)<<endl;

    return 0;
}

