class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;
        for(int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end()); // sort by value

        for(int i = 0; i < arr.size(); i++) {
            int l = i + 1, r = arr.size() - 1;
            int complement = target - arr[i].first;

            while(l <= r) {
                int mid = (l + r) / 2;
                if(arr[mid].first == complement) {
                    // return original indices
                    return {arr[i].second, arr[mid].second};
                }
                else if(arr[mid].first < complement) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return {};
    }
};
