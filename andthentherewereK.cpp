#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll i;
    ll count=0;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        while(1>0){
            if(n && (n-1)==0){
                count++;
                break;
            }else{
                n=n-2;
            }
        }
    }
    cout<<count<<endl;
}