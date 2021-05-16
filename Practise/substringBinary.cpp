/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
    
public:
   int countBinarySubstrings(string s) {
      int cnt[2] = { 0 };
      int res = 0;
      for (int i = 0; i < s.length(); ++i) {
        int num = s[i] - '0';
        if (i == 0 || s[i] != s[i - 1])
        {
            cnt[num] = 0;
        }
        ++cnt[num];
        if (cnt[num] <= cnt[1 - num])
        {
            ++res;
            int j=0;
            if(cnt[num] == 1)
            {
                j = i - 1;
            }
            else
            {
                j = i - 3;
            }
            
            for(; j <= i; j++)
            {
                cout << s[j] << " ";  
            }
            cout << endl;
        }
        
      }
      return res;
   }
   
};

int main(){
    
   Solution ob;
   cout << (ob.countBinarySubstrings("11001100")); 
   return 0;
   
}
