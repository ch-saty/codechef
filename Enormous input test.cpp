#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d=0;
	cin>>a>>b;
	for(int i=0;i<a;i++){
		cin>>c;
		if(c%b==0){
			d++;
		}	
	}
	cout<<d<<"\n";
}
