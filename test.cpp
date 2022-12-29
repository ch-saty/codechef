#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int y,x,sal=0,l=0,si=INT_MIN;
		string s;cin>>x>>y>>s;
		for(int i=0;i<=29;i++){
			if(s[i]=='1'){
				l++;
				sal+=x;
			}
			else if(s[i]=='0'){
				si=max(si,l);
				l=0;
			}
		}
		
		cout<<sal+(y*si)<<endl<<si<<endl;
	}
}
