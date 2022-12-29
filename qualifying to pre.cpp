#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		int x=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,greater<int>());		
		for(int i=0;i<n;i++){
			if(a[i]>=a[k-1])
				x++;	
			}
		cout<<x<<endl;
	}
}



