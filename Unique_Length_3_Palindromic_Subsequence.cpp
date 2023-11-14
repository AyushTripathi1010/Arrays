// Problem Link: https://leetcode.com/problems/unique-length-3-palindromic-subsequences/

// INTUITION: Here the problem look like a dp problem, but if we look carefully, here we have to only count those palindromic
// subsequence whose length is 3. If we carefully take a look for any 3 length palindrome, we will observe that the leftmost and 
// right most index element should be same and the middle element can be anyone.

// So for every character of string s we can check the leftmost and rightmost index and then see how many elements come between
// it, since the middle elements can be repeated so to avoid it we can store them in unordered set.
// And for every unique character of string s we can find it's left and right most index and then check for no. of elements
// between that particular character.

// Time complexity will be of O(26*N) where, 26 is for storing the unique charcters of string s, and we know 
// letters can be from a-z only.
class Solution {
public:

    int countPalindromicSubsequence(string s) {
          
          unordered_set<char> letters;
          int n= s.size();
          int res =0 ;
          for(char &ch : s)
          letters.insert(ch);

          for(char letter : letters)
          {
              int left_idx = -1;
              int right_idx = -1;

              for(int i= 0 ; i < n ; i++)
              {
                  if(s[i] == letter)
                  {
                      if(left_idx == -1)
                      left_idx = i;

                      right_idx = i;
                  }
              }
                unordered_set<char> st;
              for(int middle = left_idx+1 ; middle<=right_idx-1; middle++)
              {
                  st.insert(s[middle]);
              }

              res+=st.size();

          }

          return res;



    }
};