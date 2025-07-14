#include <vector>
#include <algorithm> // Required for std::sort

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result; // This will store all valid triplets
        
        // 1. Sort the array. This is crucial for the two-pointer approach and handling duplicates.
        std::sort(nums.begin(), nums.end());

        // Iterate through the array with 'i' as the first element of the triplet
        for (int i = 0; i < nums.size(); ++i) {
            // Optimization: If nums[i] is positive, and the array is sorted,
            // then nums[i] + nums[j] + nums[k] will always be positive (or zero if nums[i]=0 and others are also 0),
            // if we consider numbers to the right. Since we need sum == 0, we can break.
            if (nums[i] > 0) {
                break; 
            }

            // Skip duplicate values for 'i'.
            // This ensures we don't process the same 'i' value multiple times,
            // leading to duplicate triplets in the result.
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue; 
            }

            // Now, use the two-pointer approach for the remaining part of the array
            // to find j and k such that nums[j] + nums[k] == -nums[i]
            int left = i + 1;
            int right = nums.size() - 1;
            int target_sum_for_two = -nums[i]; // We are looking for nums[left] + nums[right] == -nums[i]

            while (left < right) {
                long long current_two_sum = (long long)nums[left] + nums[right]; // Use long long to prevent overflow

                if (current_two_sum < target_sum_for_two) {
                    left++; // Need a larger sum, move left pointer right
                } else if (current_two_sum > target_sum_for_two) {
                    right--; // Need a smaller sum, move right pointer left
                } else { // current_two_sum == target_sum_for_two, found a triplet!
                    // Add the triplet to our result vector
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Move both pointers to find other potential triplets
                    left++;
                    right--;

                    // Skip duplicate values for 'left'
                    // This ensures that even if there are multiple same 'left' values,
                    // we only add unique combinations to the result.
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }

                    // Skip duplicate values for 'right'
                    // Similar to 'left', prevents duplicate triplets.
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
        }
        return result; // Return the vector containing all unique triplets
    }
};