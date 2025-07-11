//quick sort algorithm
// sorts the data structure in ascending order
// it is slightly better than merge sort
/*
 merge sort time complexity : O(NlogN) space complexity : O(N)
 quick sort time complexity : O(NlogN) space complexity : O(1)

*/


#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &, int, int); 
void quickSort(vector<int> &arr, int low, int high){
    // if condition to check for more than one elements, if only one element is present then the array is already sorted
    if(low < high){
        int Pindex = partition(arr,low,high);
        quickSort(arr,low,Pindex-1);
        quickSort(arr,Pindex+1, high);

    }
}
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int partition(vector<int> &arr, int low, int high){

    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <= pivot && i <=high){
            i++;
        }

        while(arr[j] > pivot && j >= low){
            j--;
        }

        if(i<j) swap(arr[i],arr[j]);


    }
    swap(arr[low],arr[j]);
    return j;
}


int main(){
    vector<int> arr = {7,8,7,4,10,3,5};
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"after swapping: "<<endl;
    quickSort(arr,0,arr.size()-1);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}