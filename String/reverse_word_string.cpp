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

void reverse_string(string str) {

    reverse(str.begin(), str.end());

    stringstream iss(str);
    string word;

    while(iss >> word) {
        reverse(word.begin(), word.end());
         cout << word << " ";
    }
   
}


int main() {

    string s = "The sky is blue";

 reverse_string(s);


//    for(int i = 0; i < s.size(); i++) {

//     if(!isalnum(s[i])) {
//         return true;
//     } else 
//     return false;
//    }

}
