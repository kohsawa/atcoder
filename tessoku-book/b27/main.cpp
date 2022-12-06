#include <iostream>

using namespace std;

int A, B;

int gcd(int A, int B)
{
    int l = (A > B) ? A : B, s = (l == A) ? B : A;
    while (s > 0) {
        int rem = l % s;
        l = s;
        s = rem;
    }
    return l;
}

int main()
{
    cin >> A >> B;

    int d = gcd(A, B);

    cout << (long long)A * B / d << endl;
    return 0;
}
