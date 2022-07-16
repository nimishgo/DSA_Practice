/*
 *    File: palindromeNumber.cpp
 *    Author: nimishgo
 *    Github: nimishgo
 *    Description: https://leetcode.com/problems/palindrome-number/
 */
#include <bits/stdc++.h>   
using namespace std;

// create a temp array of length l
// 12345 : [1,2,3,4,5]
// check if [i]th element is equal to  [l - i] till l/2 

bool isPalindrome(int x)
{
    bool flag = true;

    if (x < 0) {
        return false;
    }
// count the lenght of the number
    int l = floor(log10(x)) + 1;

    int temp[l];

    for (int i = 0; i < l; i++) {
        temp[i] = x%10;
        x = x/10;
    }

    for (int i = 1; i <= l/2; i++) {
        // std::cout << temp[l - i] << " == " << temp[i - 1] << std::endl;
        if (temp[l - i] != temp[i - 1]) {
           return false;
        }
    }
    return flag;
}

int main(int argc, char *argv[])
{
    int x;

    std::cin >> x;

    std::cout <<isPalindrome(x)<< std::endl;
    return 0;
}
