/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    // vector<int> nums = {10,9,2,5,3,7,101,18};
    vector<int> nums = {9,44,32,12,7,42,34,92,35,37,41,8,20,27,83,64,
    61,28,39,93,29,17,13,14,55,21,66,72,23,73,99,1,2,88,77,3,65,83,84,
    62,5,11,74,68,76,78,67,75,69,70,22,71,24,25,26};
    int n = nums.size();
    vector<int> dp(n + 1, 1);
    vector<int> p(n +1, 0);
    int res = 1;
    int index = 0;
    for (int i = 0; i < n; i++) {
        p[i] = i;
        for (int j = 0; j < i; j++) {
            if (nums[i] < nums[j] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
                p[i] = j;
            }
            
            if (dp[i] > res) {
                res = dp[i];
                index = i;
            }
        }
    }
    
    stack<int> stk;
    
    cout << res << endl;
    while (res--) {
       stk.push(nums[index]);
        index = p[index];
    }
    
    while (!stk.empty()) {
        cout << stk.top();
        stk.pop();
        if (stk.size() != 0)
            cout << "->";
    }
    


    return 0;
}
