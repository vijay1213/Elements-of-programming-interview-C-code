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
   
string s = "Hello World";
string result;
for(int i = 1; i < s.length(); i+=4) {
  result += s[i];
}
for(int i = 0; i < s.length(); i+=2) {
  result += s[i];
}
for(int i = 3; i < s.length(); i+=4) {
  result += s[i];
}
cout << result << endl;
}
