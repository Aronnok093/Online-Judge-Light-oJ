#include<bits/stdc++.h>
using namespace std;
#define maxi 100000
vector<bool>pop(maxi+2,0);
vector<int>prime;
vector<int>pf(maxi+2,0);

void GP(){
    pop[0]=true;
    pop[1]=true;
    for(int i=2;i<=maxi;i++){
        if(!pop[i]){
            prime.push_back(i);
        for(int j=i*2;j<=maxi;j+=i){
            pop[j]=true;
            pf[j]+=1;
            }
        }
    }
}

int main(){
    GP();
    int t,count=0;
    cin>>t;
    for(int i=0;i<=t;i++){
        if(pf[i]==2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
