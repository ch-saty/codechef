#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int a,b,c,d,e;
		cin>>a>>b>>c>>d>>e;
		bool f1=false,f2=false;
		int x=min(min(a,b),min(a,c));
		if(a+b+c-x<=d)
			f1=true;
		if(x<=e)
			f2=true;
		if(f1 && f2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;	
	}
}
