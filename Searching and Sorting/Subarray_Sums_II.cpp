#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n, m;
    cin >> n >> m;

    vector<ll> sum(n+1);
    sum[0] = 0;

    for(int i = 1; i <= n; i++){
        ll num;
        cin >> num;

        sum[i] = sum[i-1] + num;
    } 

    map<ll , ll> cnt;
    ll ans = 0;
    for(int i = 0; i <= n; i++){
        ans += cnt[sum[i]-m];
        cnt[sum[i]]++;
    }
    cout << ans;

}
