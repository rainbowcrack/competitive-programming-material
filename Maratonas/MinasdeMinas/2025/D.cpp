#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll N; cin >> N;
    vector<ll> PAO(N);
    
    ll F = 0; ll P = 0; ll sum = 0; ll resto = 0;
    
    for(int i = 0; i < N; i++){
        cin >> PAO[i];
        sum += PAO[i];
    }
    
    if(sum % 6 == 0){
        F = sum / 6;
        cout << F << " " << P << '\n';
    }
    else{
        resto = sum / 6;
        resto++;
        resto = resto * 6;
        F = resto/6;
        P = resto - sum;
        cout << F << " " << P << '\n';
    }
    
    return 0;
}