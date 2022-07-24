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

string decoding(string s) {
  int cnt = 0;
string res;
for(auto c: s) {
  if(isdigit(c)) {
    cnt = cnt*10+c-'0';
    cout << cnt << " ";
  } else {
    res.append(cnt, c);
    cnt = 0;
  }
}
return res;
}

string encoding(string s) {
  string res;
  int count = 1;
  for(int i = 1; i < s.length(); i++) {
    if(i ==s.size() || s[i] != s[i-1]) {
      res += to_string(count) + s[i-1];
      count = 1;
    } else {
      // s[i] == s[i-1]
      count++;
    }
  }
  return res;
}

// string (1)	string& append (const string& str);
// substring (2)	string& append (const string& str, size_t subpos, size_t sublen = npos);
// c-string (3)	string& append (const char* s);
// buffer (4)	string& append (const char* s, size_t n);
// fill (5)	string& append (size_t n, char c);
// range (6)	template <class InputIterator>
//    string& append (InputIterator first, InputIterator last);
// initializer list(7)	
// string& append (initializer_list<char> il);

int main() {
   string s = "aaaabcccdd";

 //  cout << decoding(s) << endl;
   cout << encoding(s) << endl;


}
