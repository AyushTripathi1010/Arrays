// Problem Link: https://leetcode.com/problems/majority-element-ii/

class Solution {
    // INTUITION: simple hai yaar , same code as that of majority elemnt 2 but har cheez 2 baar repeat  hoti hai 
    //  also yaha pe ek naya teesra element jab ataa hai to vo do elements ko neutalize krta hai jo stored hai elem1 and elem2 variable me.
public:
    vector<int> majorityElement(vector<int>& nums) {
               int n = nums.size();
              int cnt1 =0  ,cnt2 = 0, elem1 , elem2;

              for(int i = 0 ; i < n; i++)
              {
                  if(cnt1 == 0 && nums[i] != elem2)
                  {
                      cnt1 = 1;
                      elem1 = nums[i];
                  }
                  else if(cnt2 == 0 && nums[i] != elem1)
                  {
                      cnt2 = 1;
                      elem2 = nums[i];
                  }
                  else if(nums[i] == elem1)
                  {
                      cnt1++;
                  }
                  else if(nums[i] == elem2)
                  {
                      cnt2++;
                  }
                  else
                  {
                      cnt1-- , cnt2--;
                  }
              }

            //    we will have to travese again as it is not mandotory that the elements we
            // have got have count greater than n/3, 
            // so now we will manually check
                    cnt1 = 0 , cnt2 =0;
                    vector<int> ls;
            for(int i = 0; i  <n; i++)
              {
                    if(elem1 == nums[i]) cnt1++;
                    if(elem2 == nums[i]) cnt2++;

              }
                 int mini = int(n/3);
                    if(cnt1 > n/3) ls.push_back(elem1);
                    if(cnt2 > n/3) ls.push_back(elem2);

                    return ls;
    }
};