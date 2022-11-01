#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 9; i >= 0; i--) {
        cout << ((N >> i) & 1);
    }
    cout << endl;
    return 0;
}
