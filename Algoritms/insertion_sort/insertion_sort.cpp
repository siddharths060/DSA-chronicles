#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void ins_sort(vector<int> &arr,int n){
    for(int i = 0 ; i < n; i++){
        int j = i;
        while(j > 0 &&  arr[j -1] > arr[j] ){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main(){
    vector<int> arr = {14,9,15,12,6,8,13};
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    ins_sort(arr,arr.size());
    cout<<"after sorting: "<<endl;
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}