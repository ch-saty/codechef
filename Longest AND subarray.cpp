#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;int mx=INT_MIN;
		int ar[n];
		for(int i=0;i<n;i++)
			ar[i]=i+1;
		int lsa=1;
		for(int i=0;i<n;i++){
			int x=(ar[i]&ar[i+1]);
			if(x>0 && (x==ar[i] || x==ar[i+1]) ) 
				lsa++;
			mx=max(mx,lsa);
		}
		cout<<mx<<endl;
	}
}
