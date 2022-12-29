#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int y,x,sal=0,l=0,si=INT_MIN;
		string s;
		cin>>x>>y>>s;
		for(int i=0;i<=s.size();i++){
			if(s[i]=='1'){
				l++;
				sal+=x;
			}
			else{
				si=max(si,l);
				l=0;
			}
		}
		
		cout<<sal+(y*si)<<endl<<si<<endl;
	}
}
