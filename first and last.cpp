#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		int a=s.length();
		int b=(int)s[0];
		int c=(int)s[a-1];
		cout<<b+c<<"\n";
	}
}
