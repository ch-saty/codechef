#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a+c>=b || a+c*2>=b)
			cout<<"YES"<<endl;
		else
				cout<<"NO"<<endl;
	}
}
