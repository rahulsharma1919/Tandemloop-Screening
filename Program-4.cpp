// Problem-4: Get the total count of number listed in the dictionary which is multiple of [1,2,3,4,5,6,7,8,9]
//   (examples)
//   input: [1,2,8,9,12,46,76,82,15,20,30]
//   Output:
//     {1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}

#include <bits/stdc++.h>
using namespace std;

void countMultiples(vector<int> &nums){
    map<int, int> result;
    for (int i = 1; i <= 9; i++){
        int count = 0;
        for (int num : nums){
            if (num % i == 0)
                count++;
        }
        result[i] = count;
    }
    cout << "{";
    for (int i = 1; i <= 9; i++){
        cout << i << ": " << result[i];
        if (i < 9)
            cout << ", ";
    }
    cout << "}";
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    countMultiples(nums);
    return 0;
}
