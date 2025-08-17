#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,cnt;
vector<double> tmp,arr;
void merge(int l,int mid, int r) {
    int i=l,j=mid+1,k=l;
    while (i <= mid && j <= r) {
        if (arr[i]<=arr[j]){tmp[k++]=arr[i++];} 
        else{
            tmp[k++]=arr[j++];
            cnt=(cnt+mid-i+1)%1000009;
        }
    }
    while(i <= mid) tmp[k++]=arr[i++];
    while (j<=r) tmp[k++]=arr[j++];
    for (i = l; i <= r; i++) arr[i]=tmp[i];
    return;
}
void mer(int l, int r) {
    if (l<r){
        int mid=(r+l)/2;
        mer(l,mid);
        mer(mid+1,r);
        merge(l,mid,r);
    }
    return;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    arr.resize(n);
    for(int i = 0; i < n; ++i) cin>>arr[i];
    tmp.resize(n);
    mer(0,n-1);
    cout<<cnt;
    return 0;
}