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

int replace_remove(char s[100], int n) {

    int write_indx = 0;
    // forward iteration for removing b and counting a
    int count_a = 0;
    for(int i = 0; i < n; i++) {
        if(s[i]!='b') {
            s[write_indx++] = s[i];
        }
        
            if(s[i]=='a') {
                count_a++;
            }
    }
    // backward iteration for the putting the value of d in place of a
    int curr_indx = write_indx-1;
    write_indx = write_indx + count_a - 1;
    int final_size =  write_indx+1;

    while(curr_indx > 0) {
        if(s[curr_indx] == 'a') {
            s[write_indx--] = 'd';
            s[write_indx--] = 'd';

        } else {
            s[write_indx--] = s[curr_indx];
        }
        curr_indx--;
    }
    return final_size;


}

int main() {
    char s[4] = {'a', 'c', 'a', 'a'};
    int n = sizeof(s);
   
   cout << replace_remove(s,n) << endl;
}
