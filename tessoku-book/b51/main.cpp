#include <iostream>
#include <stack>

using namespace std;

string S;
stack<int> st;

int main()
{
    cin >> S;

    for (int i = 1; i <= S.size(); i++) {
        if (S[i - 1] == '(') st.push(i);
        else {
            cout << st.top() << " " << i << endl;
            st.pop();
        }
    }
    return 0;
}
