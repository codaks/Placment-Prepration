#include<bits/stdc++.h>
using namespace std;
#define MAX 500


int factorial(int res_size,int res[], int n){
    int num;
    int carry = 0;
    for(int i = 0;i<res_size;i++){
        num = res[i]*n + carry;
        res[i] = num%10;
        carry = num/10;
    }
    while(carry){
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

int main(){

    int n;
    cin>>n;
    int res[MAX];
    int res_size = 1;
    res[0] = 1;

    for(int i = 2;i<=n;i++){
        res_size = factorial(res_size,res,i);
    }

    for(int i = res_size-1;i>=0;i--){
        cout<<res[i];
    }
    return 0;
}
