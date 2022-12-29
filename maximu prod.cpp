#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int d, x, y, z;
		cin>>d>>x>>y>>z;
		int a,b;
		a=x*7;
		b=y*d+z*(7-d);
		cout<<max(a,b)<<endl;
	}
}
