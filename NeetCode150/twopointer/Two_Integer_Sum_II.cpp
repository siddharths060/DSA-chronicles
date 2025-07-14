class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //given : arr of int sorted in ascending order
        // return : index of nos that add upto target, 1 indexed
        int left = 0, right = numbers.size() -1 ; // because they are 1 indexed

        while(left < right){
            if(numbers[left] + numbers[right] < target){
                left++;
            }
           else if(numbers[left] + numbers[right] > target){
                right--;
            }
            else if(numbers[left] + numbers[right] == target && left != right){
                return {left+1, right+1};

            }
        }
        return {};

    }
};
