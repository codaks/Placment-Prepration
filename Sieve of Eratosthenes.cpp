#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int visted[n+1] = {0};
    visted[1] = 1;
    visted[2] = 1;
    for(int i = 3;i<=n;i+=2){
        visted[i] = 1;
    }
    int count =2;

    for(int i = 2;i<=n;i++){
        count = 2;
        if(visted[i]){
            for(int j = i*i;j<=n; j+=i){
                if(visted[j]){
                    visted[j] = 0;
                }
                count++;
            }
        }
    }
    for(int i =1;i<=n;i++){
        if(visted[i])
            cout<<i<<" ";
    }
    return 0;
}
