#include <bits/stdc++.h>

#include <iostream>
using namespace std;
class queueOperation {
   private:
    vector<int> q;
    int head = 0, tail = 0;

   public:
    void enqueue(int x) {
        q.push_back(x);
        tail++;
    }
    string dequeue() {
        if (tail - head > 0) {
            int first = q[head];
            head++;
            return "dequeue=" + to_string(first);
            
        }
        return "Error: Queue empty";
    }
    string front() {
        if (tail - head > 0)
            return "front=" + to_string(q[head]);
        return "Error: Queue empty";
    }
    string size() {
        return "size=" + to_string(tail - head);
    }
    string isEmpty() {
        if (tail - head == 0)
            return "isEmpty=True";
        return "isEmpty=False";
    }
};
int main() {
    int n;
    cin >> n;
    queueOperation q;
    vector<string> out;
    for (int i = 1; i <= n; i++) {
        string op;
        cin >> op;
        if (op == "enqueue") {
            int x;
            cin >> x;
            q.enqueue(x);
            continue;
        } else if (op == "front") {
            out.push_back(q.front());
        } else if (op == "dequeue") {
            out.push_back(q.dequeue());
        } else if (op == "size") {
            out.push_back(q.size());
        } else {
            out.push_back(q.isEmpty());
        }
        out.push_back((i == n) ? "" : ", ");
    }
    for (auto it : out) {
        cout << it;
    }
    cout << endl;

    return 0;
}