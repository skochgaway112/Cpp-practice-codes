#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll count=0;
    ll t;
    cin>>t;
     while(t--){
         string s="";
         cin>>s;
         if(s[1]=='+'){
             count++;
         }else{
             count--;
         }
     }
     cout<<count;
     return 0;
}