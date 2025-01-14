#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int r, rev = 0, n;
        n = x; 

        while (x != 0) {
            r = x % 10;        
            rev = rev * 10 + r; 
            x = x / 10;        
        }

        if( n == rev){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
Solution solution;
cout << solution.isPalindrome(121
) << endl;
}