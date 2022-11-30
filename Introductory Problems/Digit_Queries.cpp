#include <bits/stdc++.h>
#include <fstream>
using namespace std;
#define ll long long
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    //9+90(2)+900(3)...
    int tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
 
        ll add = 9;
        ll multi = 1;
        ll num = 0;
        while(n > add*multi){
            n -= add*multi;
            num += add;
            multi++;
            add *= 10;
        }
 
        if(n%multi == 0) num += n/multi;
        else num += n/multi + 1;
 
        n %= multi;
        if(n == 0){
            n = multi;
        }
        
        string s = to_string(num);
        cout << s[n-1] << "\n"; 
 
    }
 
}
