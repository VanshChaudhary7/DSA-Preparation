#include <bits/stdc++.h>

#include <iostream>
using namespace std;
class stackOperation {
   private:
    vector<int> st;

   public:
    void push(int x) {
        st.push_back(x);
    }
    string pop() {
        if (st.size() > 0) {
            int last = st.back();
            st.pop_back();
            return "pop=" + to_string(last);
        }
        return "Error:stack underflow";
    }
    string peek() {
        if (st.size() > 0)
            return "peek=" + to_string(st.back());
        return "Error:stack underflow";
    }
    string size() {
        return "size=" + to_string(st.size());
    }
    string isEmpty() {
        if (st.size() == 0)
            return "isEmpty=True";
        return "isEmpty=False";
    }
};
int main() {
    int q;
    cin >> q;
    stackOperation st;
    vector<string>out;
    for (int i = 1; i <= q; i++) {
        string op;
        cin >> op;
        if (op == "push") {
            int x;
            cin >> x;
            st.push(x);
            continue;
        } else if (op == "peek") {
            out.push_back(st.peek());
        } else if (op == "pop") {
            out.push_back(st.pop());
        } else if (op == "size") {
          out.push_back(st.size());
        } else {
          out.push_back(st.isEmpty());
        }
        out.push_back((i==q)?"":", ");
      }
      for(auto it:out){
        cout<<it;
      }
      cout<<endl;

    return 0;
}