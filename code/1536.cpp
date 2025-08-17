#include <bits/stdc++.h>
using namespace std;
#define int long long
string reve(const string &s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    return rev;
}
string add(string &a, string &b)
{
    string ra = reve(a), rb = reve(b);
    int size = max(ra.size(), rb.size()) + 10;
    ra.resize(size, '0'), rb.resize(size, '0');
    string ans;
    int flag = 0;
    for (int i = 0; i < size; ++i)
    {
        int sum = (ra[i] - '0') + (rb[i] - '0') + flag;
        flag = sum / 10;
        ans.push_back((sum % 10) + '0');
    }
    if (flag)
        ans.push_back(flag + '0');
    reverse(ans.begin(), ans.end());
    ans.erase(0, min(ans.find_first_not_of('0'), ans.size() - 1));
    return ans.empty() ? "0" : ans;
}
string chen(string num1, string num2)
{
    int n = num1.size(), m = num2.size();
    vector<int> res(n + m, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + res[i + j + 1];
            res[i + j + 1] = sum % 10;
            res[i + j] += sum / 10;
        }
    }
    while (res.size() > 1 && res[0] == 0)
        res.erase(res.begin());
    string ans = "";
    for (int i : res)
    {
        ans += (i + '0');
    }
    return ans;
}
signed main()
{
    int t;
    cin >> t;
    string sum="0",ans;
    for(int i = 1; i <= t; i++){
        ans="1";
        for(int j = i; j > 0; j--) {
            ans=chen(ans,to_string(j));
        }
        sum=add(sum,ans);
    }
    cout << sum;
    return 0;
}