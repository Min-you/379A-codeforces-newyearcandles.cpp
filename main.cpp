#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int hours = a; 
    
    while (a >= b){
        // numb is the amount of candles required to make a new candle
        int numb = a/b;
        hours += numb;
        int m = a % b;
        a = numb + m;
    }

    cout << hours << endl;
    return 0;
}
