#include <bits/stdc++.h>
using namespace std;

string dp1(string a,string b){
    int dp[a.size()+1][b.size()+1];
    for(int i=0;i<a.size()+1;i++){
        for(int j=0;j<b.size()+1;j++){
            if(i==0 || j==0) dp[i][j]=0;
            else if(a[i-1]==b[j-1]) dp[i][j]=max(1+dp[i-1][j-1],max(dp[i][j-1],dp[i-1][j]));
            else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
}

int main(){
    int n;
    string a,b;
    cin>>a;
    b=a;
    reverse(b.begin(),b.end());
    //cout<<dp(a,b,a.size(),b.size())<<endl;
    cout<<dp1(a,b);
}
