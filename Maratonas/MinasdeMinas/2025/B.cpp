#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll fibonacci(ll N) {
    if (N == 0) return 1;
    if (N == 1) return 1;

    return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll N;
    cin >> N;

    string palavras[] = {"UAI", "TREM", "SO"};
    int p = 0;
    int digitos = 1;

    ll a = 1, b = 1;

    for (ll i = 0; i < N; i++) {
        ll num;

        if (i == 0 || i == 1) {
            num = 1;
        } else {
            num = a + b;
        }

        int d = to_string(num).size();

        if (d > digitos) {
            cout << palavras[p] << " ";
            p = (p + 1) % 3;
            digitos = d;

            num = pow(10, d - 1);
        } else {
            cout << num << " ";
        }

        a = b;
        b = num;
    }

    cout << '\n';
    return 0;
}