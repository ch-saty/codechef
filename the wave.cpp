#include<bits/stdc++.h>
using namespace std;
 void solve(){
    long long N,q;
    cin>>N>>q;
    long long arr[N];
    for(long long i=0;i<N;i++)
        cin>>arr[i];
    sort(arr,arr+N);
    for(long long i=0;i<q;i++){
        long long x;
        cin>>x;
        long long pos=lower_bound(arr,arr+N,x)-arr;
        if(pos<N && arr[pos]==x)
            cout<<0<<endl;
        else if(pos%2==0)
            cout<<"POSITIVE"<<endl;
        else
            cout<<"NEGATIVE"<<endl;
 
    }
}
 
int main(){
    int t=1;
    while(t--){
        solve();
    }
}
