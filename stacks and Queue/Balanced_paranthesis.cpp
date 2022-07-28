int Solution::solve(string A) {
    int n = A.length();
    stack<char> st;
    for(int i = 0; i < n; i++) {
        if(A[i]=='(' || A[i]=='{' || A[i]=='[') {
            st.push(A[i]);
        } else {
            if(st.empty()) {
            return 0;
        }
    
    if((A[i]==')' && st.top()!='(') || (A[i]=='}' && st.top()!= '{') || (A[i]==']' && st.top()!='[')) {
        return 0;
    }

    st.pop();
}
}
    return st.empty();
    
}
