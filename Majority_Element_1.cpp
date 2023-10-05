// Problem Link: https://leetcode.com/problems/majority-element/

// INTUITION : this question here is solved using moore voting algorithm, which
// focuses on neutralisation of one element by another different element, because
// if any element appears more than n/2 times, it is obvious that it is a majority
// element, and other elements can't cancel or neutralise, the majority element
// fully, so the majority element is left with us.

// if only update an elements value if the previous element count
// has become 0. which means currently it is fully neutalised, and a new element
// is in majority.
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        
        int count =0 , element =0;
        
        for(int i =0 ; i < n ; i++)
        {
            
            if(count == 0)
            {
                element = nums[i];
            }
            
            if(element == nums[i])
            {
                count++;
            }
            else
                count--;
        }
        
        return element;
    }
};