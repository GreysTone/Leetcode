//
// Created by Jerry Li on 2017/10/31.
//
/********************* Problem Specification *********************
 Initially on a notepad only one character 'A' is present. You can perform two operations on this notepad for each step:

Copy All: You can copy all the characters present on the notepad (partial copy is not allowed).
Paste: You can paste the characters which are copied last time.
Given a number n. You have to get exactly n 'A' on the notepad by performing the minimum number of steps permitted. Output the minimum number of steps to get n 'A'.

Example 1:
Input: 3
Output: 3
Explanation:
Intitally, we have one character 'A'.
In step 1, we use Copy All operation.
In step 2, we use Paste operation to get 'AA'.
In step 3, we use Paste operation to get 'AAA'.
Note:
The n will be in the range [1, 1000].
 ***************************** Solution **************************
 See the code and descriptions below.
 One method is DP. Notice that DP has to iterate all numbers as divisors;
 ******************************** End ****************************
*/
#ifndef LEETCODE_Q650_H
#define LEETCODE_Q650_H

#include "commons.h"
class Solution {
public:
    int minSteps(int n) {
        if(n == 0 || n == 1) return 0;
        int result = 0;
        
        for(int i = 2; i <= n; i++) {
            while(n % i == 0) {
                result += i;
                n = n / i;
            }
        }
        return result;
    }
};
#endif