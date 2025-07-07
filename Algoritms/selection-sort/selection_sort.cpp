/*
Selection Sort : 
Select the minimum element and swap it 
basically, select a minimum element and swap it with the current index or pointer element
it requires 2 for loops, i that starts from 0 to n-1(not included) and j starts from 1 to n-1(not included)



*/

#include<iostream>

using namespace std;

void swap(int &a, int &b){
int temp;
temp = a; 
a = b;
b = temp;
}


void selection_sort(vector<int> &arr,int n){
int mini,i;
for(i = 0; i < n-1 ; i++){
mini = i;

for(int j = i; j < n-1; j++){
 if(arr[j] <= arr[mini]){
  mini = j;
 }
 
}
swap(arr[mini],arr[i]);

}
}

int main(){

vector<int> v = {1,2,5,10,2,10,8,0,4};
for(int i=0; i<v.size(); i++){
cout<<v[i]<<" ";
}
cout<<endl;

selection_sort(v,v.size());

for(int i=0; i<v.size(); i++){
cout<<v[i]<<" ";
}
cout<<endl;


return 0;
}
