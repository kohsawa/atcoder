#include <iostream>

using namespace std;

int N, A, B;
bool win[100001];

int main()
{
    cin >> N >> A >> B;

    for (int i = 0; i <= N; i++) {
        if (i >= A && win[i - A] == false) win[i] = true;
        else if (i >= B && win[i - B] == false) win[i] = true;
        else win[i] = false;
    }

    cout << ((win[N]) ? "First" : "Second") << endl;
    return 0;
}
