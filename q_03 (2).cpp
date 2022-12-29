#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		int x;cin>>x;
		string s;cin>>s;
		int i=0;
		bool flag=true;
		while(i!=x-1){
			if(s[0]=='.'){
				//          ..H..T...HTH....T.
				while((s[i]=='.' || s[i]!='H') && i!=x-1){
					i++;
					if(s[i]=='T'){
						flag=false;
						break;
					}					
				}
				continue;
			}
			else if(s[0]=='H'){
				
				while(s[i]!='T' && i!=x-1){
					i++;
					if(s[i]=='H'){
						flag=false;
						break;
					}
					
				}			// h..h.t
				continue;
			}
		}
		if(flag)
			cout<<"Valid"<<endl;
		else
			cout<<"Invalid"<<endl;
	}
}
