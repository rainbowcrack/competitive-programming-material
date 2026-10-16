#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<int> dist(N);
    int sum = 0;
    
    for(int i = 0; i < N; i++){
        cin >> dist[i];
        sum += dist[i];
    }
    
    if(sum > 500){
        cout << sum << '\n' << "Grande viagem" << '\n';
    }else{
        cout << sum << '\n' << "Viagem curta" << '\n';
    }
    
    return 0;
}