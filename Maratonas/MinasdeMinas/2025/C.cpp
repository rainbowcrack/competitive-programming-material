#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll N; cin >> N; // qt capivaras
    ll P; cin >> P; // qt pao de queijo
    
    vector<ll> tempo(N);
    
    for(int i = 0; i < N; i++){
        cin >> tempo[i];
    }
    
    ll ini = 1;
    ll fim = *min_element(tempo.begin(), tempo.end()) * P;

    while (ini < fim) {
        ll meio = ini + (fim - ini) / 2;
        ll total = 0;

        for (int i = 0; i < N; i++) {
            total += meio / tempo[i];

            if (total >= P) break;
        }

        if (total >= P) {
            fim = meio;
        } else {
            ini = meio + 1;
        }
    }

    cout << ini << '\n';
    return 0;
}