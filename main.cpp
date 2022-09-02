#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int hours = a; 
    
    while (a >= b){
        // numb is the amount of new candles made from old candles
        int numb = a/b;
        hours += numb;
        int m = a % b;
        a = numb + m;
    }

    cout << hours << endl;
    return 0;
}
