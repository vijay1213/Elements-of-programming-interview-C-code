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

bool Ispalinfrome(string str) {

    int i = 0;
    int j = str.size();

    while(i < j) {

        while(!isalnum(str[i]) && i < j) {
            i++;
        }
        while(!isalnum(str[j]) && i < j) {
            j--;
        }
        if(tolower(str[i++]) != tolower(str[j--])) {
            return false;
        }
    }
    return true;
}

int main() {

    string s = "vijau";
    cout << Ispalinfrome(s);

//    for(int i = 0; i < s.size(); i++) {

//     if(!isalnum(s[i])) {
//         return true;
//     } else 
//     return false;
//    }

}
