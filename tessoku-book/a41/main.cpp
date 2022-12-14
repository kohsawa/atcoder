#include <iostream>

using namespace std;

int N, len = 0;
string S;

int main()
{
    cin >> N >> S;

    for (int i = 0; i < N;) {
        char c = S[i];
        int j = 0;
        while (S[i] == c) {
            j++;
            i++;
        }
        len = max(len, j);
    }

    cout << ((len >= 3) ? "Yes" : "No") << endl;
    return 0;
}
