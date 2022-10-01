//Aditya Dube
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void crossing()
{
    ll n;
        cin>>n;
        vector<ll>arr(n);
        for(ll i=0; i<n; i++){
            cin>>arr[i]; 
        }
        ll start = arr[0];  
        for(ll i=1; i<n; i++){
            if(arr[i] > start){
                cout<<-1<<endl;
                return;
            }
        }

        stack<ll>s;
        for(ll i=1; i<n; i++){
            while(s.size() and s.top()<= arr[i]){
                s.pop();  
            }
            s.push(arr[i]); 
        }
        ll ans = 0;
        while(!s.empty()){
            ans++;
            s.pop();
        }
        cout<<ans<<endl;
}

int main()
{
    int t;
    cin>> t;
    while(t--){
        crossing();
    }
    return 0;
}