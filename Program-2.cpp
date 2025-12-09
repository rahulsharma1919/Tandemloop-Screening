// Problem-2: With a single integer as the input, generate the following until a = x [series of numbers as shown in below examples]

//   Output: (examples)
//     1) input a = 1, then output : 1
//     2) input a = 2, then output : 1, 3
//     3) input a = 3, then output : 1, 3, 5
//     4) input a = 4, then output : 1, 3, 5, 7
//     .
//     .
//     5) input a = x, then output : 1, 3, 5, 7, .......

#include <bits/stdc++.h>
using namespace std;

void printSeries(int a){
    for (int i = 1; i <= a; i++){
        cout << (2 * i - 1);
        if (i < a)
            cout << ", ";
    }
}

int main(){
    int a;
    cout << "Enter value of a: ";
    cin >> a;
    printSeries(a);
    return 0;
}
