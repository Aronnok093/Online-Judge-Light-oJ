#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long len =s.size(),count=0;
        for(int i=0;i<len;i++){
            if(s[i]=='1'&&s[i+1]!='1')
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
