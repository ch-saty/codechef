#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		string s;cin>>s;
		string f,l;
		f=s[0];
		l=s[s.length()-1];
		cout<<stoi(f)+stoi(l)<<endl;
		}
	}

