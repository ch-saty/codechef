#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,q,x,res=INT_MIN;
		cin>>n>>q;
		int ar[n];
		for(int i=0;i<n;i++)
			cin>>ar[i];
		while(q--){
			x=0;
			int a,b;cin>>a>>b;
			for(int i=0;i<n;i++){
				if(ar[i]>=a && ar[i]<=b)
					x++;
				}
				cout<<x<<endl;
				int y=(10*x)-(b-a);
			res=max(res,y);
			cout<<res<<" ";
		}
		cout<<endl;
	}
}
