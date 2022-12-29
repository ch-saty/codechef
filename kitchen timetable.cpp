#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		int s;cin>>s;
		int a[s],b[s];
		for(int i=0;i<s;i++)
			cin>>a[i];
			
		for(int i=0;i<s;i++)
			cin>>b[i];
			
		int count=0;
		
		for(int i=0;i<s;i++){
			if(i==0){
				if(a[0]>=b[0]){
					count++;
					continue;}
				continue;
			}
			if((a[i]-a[i-1])>=b[i])
				count++;
		}
		cout<<count<<endl;
	}
}
