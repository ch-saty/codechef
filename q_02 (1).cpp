#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,x,y;
		cin>>n>>x>>y;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int c=0,t=0;
		for(int i=0;i<x;i++){
			if(a[i]==1)
				c++;
		}
		for(int i=0;i<n;i++){
			if(a[i]==1)
				t++;
		}
		if(t==n)
			cout<<"100"<<endl;
		else if(c==x)			
			cout<<y<<endl;
		else
			cout<<"0"<<endl;

	}
}
