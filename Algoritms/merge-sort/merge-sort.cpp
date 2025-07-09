/*
 * merge sort is much more efficient than selection,bubble and insertion sort
 * it uses recursion
 * main concept of merge-sort is DIVIDE AND MERGE
 * divide the input till you reach single eleements, then while merging we sort them and merge
 * step-1 : divide or partition the input, now instead of partitioning the input into different arrays(ie, more space complexity) we will play around with the indexes
 * psuedocode for partitioning
 * void mergeSort(int arr, int low, int high){
 * // base case condition, when the input is divided till it gets only one element, then low and high will be pointing to the same element, ie, low == high, also for safety reasons we can keep it as low >= high return or go back
 * if(low >= high) return
 
   mid = low + high \ 2;
   // we are dividing the input from 0 to mid and mid+1 to high (essentially partitioning the array)
   mergeSort(arr,low,mid);
   mergeSort(arr,mid+1, high);
   // after partitioning we have to merge the array hence we call the merge function
   merge(arr,low,mid,high);
 *
 *
 * }
 *
 *
 * pseudocode for merge
 *
 * merge(arr,low,mid,high){
 * left = low;
 * right = high;
 * while(low<= mid && right<=high){
 * if(arr[left] <= arr[right]){
 * temp.add(arr[left]);
 * left++;
 * }
 * else{
 * temp.add(arr[right]);
 * right++;
 * }
 * }
 * due to some condition, lets suppose the while loop breaks(ie, either low reaches mid or right reaches high)
 * while(left<= mid){
 * temp.add(arr[left]);
 * left++;
 * }
 *
 * while(right<=high){
 * temp.add(arr[right]);
 * righ++;
 * }
 *
 * now to apply the merge we need to initiate a for loop from low to high and assign the elements of temp to arr
 * for(i = low; i<=high; i++){
 * arr[low] = temp[i-low];
 * }
 *
 * }
 *
 *
 */

 #include<iostream>
 #include<vector>
 using namespace std;

 void merge(vector<int>&, int, int, int);
 void mergeSort(vector<int> &arr, int low, int high){
  	//recursion base condition
	 if(low >= high) return;
	 int mid = (low + high) / 2;
	 mergeSort(arr,low,mid);
	 mergeSort(arr,mid+1,high);
	 merge(arr,low,mid,high);
 }

 void merge(vector<int> &arr, int low, int mid, int high){
  vector<int> temp;
 // care for mistake, take right as mid+1
  int left = low;
  int right = mid+1;
  while(left <= mid && right <= high){
  	if(arr[left] <= arr[right]){
		temp.push_back(arr[left]);
		left++;
	}
	else{
	 	temp.push_back(arr[right]);
		right++;
	}
  }

  while(left <= mid){
  	temp.push_back(arr[left]);
	left++;
  }

  while(right <= high){
  	temp.push_back(arr[right]);
	right++;
  	}

  for(int i = low; i <= high; i++){
  	arr[i] = temp[i-low];
  }
 
 }


int main(){
vector<int> arr = {3,1,2,4,1,5,2,6,4};
cout<<"before: "<<endl;
for(int i=0; i<arr.size(); i++){
 cout<<arr[i]<<" ";
}
cout<<endl;
mergeSort(arr,0,arr.size()-1);
cout<<"mergeSorted: "<<endl;
for(int i=0; i<arr.size();i++){
cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
