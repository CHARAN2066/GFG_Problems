class Solution {
  public:
    string s;
    int n;
    stack<char> st;
    void append(char x) {
        // append x into document
        s+=(x);
    }

    void undo() {
        // undo last change
        n=s.size();
        st.push(s[n-1]);
        s.pop_back();
    }

    void redo() {
        // redo changes
        s+=(st.top());
        st.pop();
    }

    string read() {
        // read the documentr
        return s;
    }
};