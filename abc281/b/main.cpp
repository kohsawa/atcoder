#include <iostream>

using namespace std;

string S;

int main()
{
    cin >> S;

    if ('A' > S[0] || 'Z' < S[0]) cout << "No" << endl;
    else if ('A' > S[S.length() - 1] || 'Z' < S[S.length() - 1]) cout << "No" << endl;
    else if (S.length() == 8) {
        string N;
        for (int i = 1; i < (int)S.length() - 1; i++) N.push_back(S[i]);
        int num = atoi(N.c_str());

        if (100000 > num || 999999 < num) cout << "No" << endl;
        else cout << "Yes" << endl;
    } else cout << "No" << endl;
    return 0;
}
