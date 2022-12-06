#include <iostream>

using namespace std;

int A, B;

int main()
{
    cin >> A >> B;

    int l = (A > B) ? A : B, s = (l == A) ? B : A;
    while (s > 0) {
        int rem = l % s;
        l = s;
        s = rem;
    }

    cout << l << endl;
    return 0;
}
