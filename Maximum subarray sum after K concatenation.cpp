#include <bits/stdc++.h> 
long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
	// Write your code here.
        long long sum = 0, mex =INT_MIN;
    vector<int> vec;
    for (int i = 0; i < k; i++) {
        vec.insert(vec.end(), arr.begin(), arr.end());
    }

    

    for (int i = 0; i < k * n; i++) {
        sum += vec[i];
        mex = max(mex, sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    return mex;
}
