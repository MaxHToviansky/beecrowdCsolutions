#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    
    cin >> T;
    vector<double> testes(T);

    for(int i = 0; i < T; i++){
        cin >> testes[i];
        testes[i] = (25 - 3*testes[i])/2;
    }
    for(int i = 0; i<T; i++){
        cout.precision(1);
        cout << fixed <<testes[i] << endl;
    }
}