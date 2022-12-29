#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        string s;
        cin>>c>>a>>b>>s;
        int sum=0;
        for(int i=0;i<c;i++){
        	if(s[i]=='1')
        		sum+=b;
        	else
        		sum+=a;
		}
        cout<<sum<<endl;
    }
}
