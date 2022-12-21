#include <iostream>
#include <stack>

using namespace std;

int Q, q;
stack<string> st;
string x;

int main()
{
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        cin >> q;

        if (q == 1) {
            cin >> x;
            st.push(x);
        } else if (q == 2) cout << st.top() << endl;
        else st.pop();
    }
    return 0;
}
