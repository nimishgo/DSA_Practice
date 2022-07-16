/*
 *    File: pascals.cpp
 *    Author: nimishgo
 *    Github: nimishgo
 *    Description: https://leetcode.com/problems/pascals-triangle/
 */
#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    std::vector<std::vector<int>> res;
    
    int n;
    std::cin >> n; 
    // n = 5 , C(n,k) = n! / k!(n - k)!
    // C(0,0) = 1
    // C(1,0) = 1! / 1! = 1 , C(1,1) = 1
    // C(2,0) = 1 , C(2 , 2 - 1) = 2 , C(2 , 2 - 2) = 1
    // C(3,0) = 1 , C(3 , 3 - 1) = 3 , C(3 , 3 - 2) = 3! / 2!(3 - 2)! = 3 , C(3 , 3 - 3) = 3! / 3! (3 - 3)! = 1   
    // for n = 3
    // 1
    // 1 1
    // 1 2 1
    //
    // for n = 4
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1

    std::vector<std::vector<int>> ans;
    std::vector<int> t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
        if (j == 0 || j == i) {
            t.push_back(1);
            // add 1 to the starting and ending 
        }
        else
        {
    
            // else add the previous j_th element and j_th - 1 element to the vector

            t.push_back(ans[i - 1][j] + ans[i - 1][j - 1]);
        
        }
    }
        ans.push_back(t);
        t.clear();
    }

     for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << ans[i][j] <<" ";
        }
        std::cout << std::endl;
    }

    return 0;
}
