#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		int s;cin>>s;
		
		int h[s];
		for(int i=0;i<s;i++){
			cin>>h[i];
		}
		if(s%2==0){
			cout<<"no\n";
			continue;
		}
		int x=s/2;						//1 2 1
		bool flag=true;
		for(int i=0;i<x;i++){
			if((h[0]!=1 || abs(h[i]-h[i+1])!=1 || h[i]>=h[i+1]) || (h[x+i]<=h[x+i+1])){
				flag=false;
				continue;
			}
			else if(h[0]==1 && abs(h[i]-h[i+1])==1 && h[i]<h[i+1] && (h[x+i]>h[x+i+1]))
				continue;				
		}
		if(flag)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;			
	}
}
