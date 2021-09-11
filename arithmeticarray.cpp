#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         ll i;
         ll sum=0;
         ll n;
         cin>>n;
         vector<ll> v1;
         for(i=0;i<n;i++){
             ll x;
             cin>>x;
             v1.push_back(x);
         }
         for(i=0;i<n;i++){
              sum=sum+v1[i];
         }
            if(sum==n){
                 cout<<"0"<<endl;
            }else if(sum>n){
                cout<<sum-n<<endl;
            }else{
                cout<<"1"<<endl;
            }
    }
    return 0;
}