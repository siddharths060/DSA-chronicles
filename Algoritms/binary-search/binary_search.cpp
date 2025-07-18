//the array must be monotonic ie, either inc or dec, else BS will fail
#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int> &arr, int k){
    
    // here arr is the monotonic input array and k is the element to be searched.
    int low = 0, high = arr.size() -1;
    // initially the search space is 0 to n-1
    while(low < high){
        cout<<"Current range:"<<low<<" "<<high<<endl;
        int mid = (low + high) / 2 ;
        // divides the search space [0, n-1]
        // [0,mid-1] and [mid+1, n-1]
        if(arr[mid] == k){
            return mid;
        }else if(arr[mid] > k){
            // basically the pivot element is greater than k, then the element is in the left part, hence discard the left part
            // the search space updates to : [0,mid -1] 
            high = mid -1;
        }else{
            // basically the pivot element is less than k, then the element is in the right part, hence discard te left part
            // search space becomes [mid+1, n-1]
            low = mid +1;
        }

    }
    // the while loop runs till the array is divided into a single element, if element is not in the array then return -1
    return -1;
}

int main(){
    vector<int> arr = {1,1,3,6,8,9,11,15,25};
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<bs(arr,11)<<endl;
    cout<<bs(arr,3)<<endl;
    cout<<bs(arr,0)<<endl;
    return 0;
}