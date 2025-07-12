

#include<iostream>
#include<vector>
using namespace std;

void swap(int &a , int &b){
int temp = a;
	a = b;
	b = temp;
}

void bubble_sort(vector<int> &arr, int n){

for(int i = n-1; i >= 1; i--)
{
	for(int j = 0; j < i-1; j++)
	{
		if(arr[j] > arr[j+1])
			swap(arr[j],arr[j+1]);
	}
}
}



int main(){

vector<int> arr = {1,7,2,17,32,8,54,34,72};
cout<<"arr before swapping : "<<endl;
for(int i = 0 ; i < arr.size(); i++){
cout<<arr[i]<<" ";
}

cout<<endl;

bubble_sort(arr, arr.size());

cout<<"arr after swapping: "<<" ";
cout<<endl;
for(int i = 0 ; i < arr.size(); i++){
cout<<arr[i]<<" ";
}

cout<<endl;


return 0;
}
