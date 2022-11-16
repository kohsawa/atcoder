#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, A[100001];

int main()
{
    cin >> N;
    for (int i = 1; i <= N;i++) cin >> A[i];

    vector<int> O;
    for (int i = 1;i <= N;i++) O.push_back(A[i]);
    sort(O.begin(), O.end());
    O.erase(unique(O.begin(), O.end()), O.end());

    for (int i = 1;i <= N;i++) {
        cout << lower_bound(O.begin(), O.end(), A[i]) - O.begin() + 1;
        if (i != N) cout << " ";
    }
    cout << endl;
    return 0;
}
