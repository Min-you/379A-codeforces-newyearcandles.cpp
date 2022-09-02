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
        // if there is a remainder it means that that is the amout of candles we can make before 
        int m = a % b;
        a = numb + m;
    }

    cout << hours << endl;
    return 0;
}
