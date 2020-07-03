#include<bits/stdc++.h>
using namespace std;

int DP(int n,int r,int p){
    int C[r+1] = {0};
    C[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}

int lucas(int n,int r,int p){
    if(r==0)
        return 1;
    int ni = n % p;
    int ri = r % p;
    return (lucas(n/p,r/p,p) * DP(ni,ri,p)) % p;
}

int main(){
    int n,r,p;
    cin>>n>>r>>p;

    cout<<lucas(n,r,p);
    return 0;
}
