#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    // convidados
    ll C; cin >> C;
    // pao de queijo
    ll P; cin >> P;
    
    bool tem = 0;
    
    if(P >= C * 2) tem = 1;
    
    cout<< tem << endl;

    return 0;
}