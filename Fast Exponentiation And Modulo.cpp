#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int a,b,m;
    cin>>a>>b>>m;
    int res = 1;
    while(b>0){
        if(b&1){
            res = res*a;
        }

        a = a*a;
        b = b>>1;
    }
    return 0;
}
