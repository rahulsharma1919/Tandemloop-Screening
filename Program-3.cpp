// Problem-3: With a single integer as the input, generate the following until a = x [series of numbers as shown in below examples]

//   Output: (examples)
//     1) input a = 1, then output : 1
//     2) input a = 2, then output : 1
//     3) input a = 3, then output : 1, 3, 5
//     4) input a = 4, then output : 1, 3, 5
//     5) input a = 5, then output : 1, 3, 5, 7, 9
//     6) input a = 6, then output : 1, 3, 5, 7, 9
//     .
//     .
//     7) input a = x, then output : 1, 3, 5, 7, .......

#include <bits/stdc++.h>
using namespace std;

void printSeries(int a) {
    int count;
    if (a % 2 == 0)
        count = a - 1;
    else
        count = a;
    for (int i = 1; i <= count; i++) {
        int val = 2 * i - 1;
        cout << val;
        if (i < count)
            cout << ", ";
    }
}

int main() {
    int a;
    cout << "Enter value of a: ";
    cin >> a;
    printSeries(a);
    return 0;
}
