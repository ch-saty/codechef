#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int d,x,y,z;
		cin>>d>>x>>y>>z;
		int a=7*x,b=(y*d)+(z*(7-d));
		cout<<max(a,b)<<endl;
	}
}
