#include <bits/stdc++.h>
#define pb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define trace(x) cerr << #x << " = " << x << '\n'
#define ll long long

using namespace std;

template<class T> bool chmax(T& A, T&& B) { return B > A? A = B, true : false; }
template<class T> bool chmin(T& A, T&& B) { return B < A? A = B, true : false; }

const int64_t DESPACITO = 2e18;
const int INF = 2e9, MOD = 1e9+7;
const int MxN = 2e5 + 5;

int main() {
   
string s = "IC";
unordered_map<char, int>mp = {{'I',1}, {'V', 5}, {'X', 10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};

int sum = mp[s.back()];
for(int i = s.length()-2; i>=0; i--) {
  if(mp[s[i]] < mp[s[i+1]]) {
    sum -= mp[s[i]];
  } else {
    sum += mp[s[i]];
  }
  cout << sum << endl;


}
}
