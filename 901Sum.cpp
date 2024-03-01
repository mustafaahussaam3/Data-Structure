

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
     {
       vector<int> sol = {0};
       int i = 0 , j = 1, sum;
       while ( i  < nums.size())
       {
           sum = nums[i] + nums[j];
           if (sum == target)
           {
               sol = { i , j};
               return sol;
           }
           else
           {
               if ( i == j)
                 return sol;
               if  ( j == nums.size() - 1)
               {   
                 i++;
                 j = i + 1;
               }
               else 
                j++; 
           }
       }
    return sol;
    }
};
