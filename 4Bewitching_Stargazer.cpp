https://codeforces.com/contest/2053/problem/C
#include<bits/stdc++.h>
using namespace std;
long long doit(int s,int e, int k){
    if(e-s+1<k) return 0;
    int m=s+(e-s)/2;
    return (e-s+1)%2==0?doit(s,m,k) + doit(m+1,e,k):m+doit(s,m-1,k) + doit(m+1,e,k);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;
    long long lucky_value=doit(1,n,k);
    cout<<lucky_value<<endl;
    }
}