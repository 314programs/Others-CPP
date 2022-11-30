#include <bits/stdc++.h>
#include <fstream>
using namespace std;
#define ll long long
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    string s;
    cin >> s;
 
    map<char, int> m;
    for(auto ch: s){
        m[ch]++;
    }
 
    int odd = 0;
    string odd_s = "";
 
    for(int i = 0; i < 26; i++){
       if(m[char(i + 'A')]%2 == 1){
           odd++;
           for(int j = 0; j < m[char(i + 'A')]; j++){
               odd_s += char(i + 'A');
           }
       }
    }
 
    if(odd > 1){
        cout << "NO SOLUTION\n";
    }
    else{
        string s = "";
        for(auto ch: m){
            if(ch.first != odd_s[0]){
                for(int j = 0; j < ch.second/2; j++){
                    s += ch.first;
                }
            }
        }
        string rev = s;
        reverse(rev.begin(), rev.end());
 
        cout << s << odd_s << rev;
    }
 
}
