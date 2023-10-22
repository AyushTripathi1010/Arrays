// Problem Link: https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-125/problems

// INTUITION:  Here we have to find the minimum elements that we cna remove from the array, such that
// all the elements have same occurence or 0 occurence.

// So we are storing the occrences of all elements in the map, and then finding the elment with highest occurence.

// One thing to observe is that it doesn't mean we have found the maximum occurences of an element then we can simply
// subtract it from n(total elements). Because it is possible that suppose maximum occurence comes out to be 2. And we
// have some elements that have occurences more than 2, so we can reduce those elements frequency to 2 and elements removed in
// that operation will be 3 - 2 = 1 will be removed.
// But elements with occurence less than X will be removed as it is.

// We don't know for which occurence X we will get the minimum operations so we are trying out all values of X from
// maximum occurence till 1.
class Solution{
  public:
  
  int solve(unordered_map<int,int> &m, int X)
  {
      int cnt= 0;
      for(auto &elem : m)
      {
          if(elem.second >= X)
          {
              cnt+= (elem.second-X);
          }
          else
          {
              cnt+= elem.second;
          }
      }
      
      return cnt;
  }
  int stableArray(vector<int>& arr){
       
       unordered_map<int,int> m;
       
    //   First count the occurences of element
    
       for(int &elem : arr)
       {
           m[elem]++;
       }
       
       int max_occurence = 0;
       for(auto &elem : m)
       max_occurence = max(max_occurence , elem.second);
       
       int ans =INT_MAX ;
       for(int i = max_occurence ; i>=1 ; i--)
       {   
           int operations = solve(m, i);
           ans = min(ans, operations);
       }
       
       return ans;
       
       
  }