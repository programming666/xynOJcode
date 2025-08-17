#include<bits/stdc++.h>
using namespace std;
string add(string num1,string num2){
    string sum="";
    int i=num1.length()-1,j=num2.length()-1,jw=0;
    while(i >= 0 || j>=0 || jw){
        int cur = jw;
        if (i>=0) cur+=num1[i--]-'0';
        if (j>=0) cur+=num2[j--]-'0';
        sum+=to_string(cur%10);
        jw=cur/10;
    }
    reverse(sum.begin(),sum.end());
    return sum;
}
string jian(string num1, string num2) {
    string cha="";
    int n1=num1.size(),n2=num2.size();
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    int jw = 0;
    for(int i = 0; i < n2; i++){
        int cur=((num1[i]-'0')-(num2[i]-'0')-jw);
        if(cur < 0){
            cur+=10;
            jw = 1;
        } 
        else jw = 0;
        cha+=to_string(cur);
    }
    for(int i = n2; i < n1; i++){
        int cur=((num1[i]-'0')-jw);
        if(cur<0){
            cur+=10;
            jw=1;
        } 
        else jw = 0;
        cha += to_string(cur);
    }
    reverse(cha.begin(), cha.end());
    size_t bushi0 = cha.find_first_not_of('0');
    if(string::npos!=bushi0) return cha.substr(bushi0);
    return "0"; 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    string dp[n+20],cur;
    dp[0]="1";
    cur="1";
    for(int i = 1; i <= k; ++i){
        dp[i]=cur;
        cur=add(cur,dp[i]);
    }
    for(int i = k+1; i <= n; ++i) dp[i] = jian(add(dp[i-1],dp[i-1]), dp[i-k-1]);
    cout<<dp[n];
    return 0;
}