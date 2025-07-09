/*
Selection Sort : 
Select the minimum element and swap it 
basically, select a minimum element and swap it with the current index or pointer element
it requires 2 for loops, i that starts from 0 to n-1(not included) and j starts from 1 to n-1(not included)

pseudo code:
outer for loop i goes from 0 to n-2
initially assign mini to i
inner for loop j goes from i to n-1
check if arr[j] is less than arr[mini]
assign mini to j 
if so swap the elements else leave it(ie, they are sorted)


dry run : 
consider this example : 
13 46 24 52 20 9

i = 0, mini = i = 0, outerloop i = 0

j = i = 0, if 13 < 13 false
j = i = 1, is 46 < 13 false
j = i = 2, is 24 < 13 false
j = i = 3, is 52 < 13 false
j = i = 4, is 20 < 13 false
j = i = 5, is 9 < 13 true
mini = j = 5
swap(9,13)

9 46 24 52 20 13

i = 1, mini = i = 1, outerloop i = 1

j = i = 0, if 9 < 9 false
j = 1, if 46 < 46 false
j = 2, if 24 < 46 true
mini = j = 2
swap(46,24)

9 24 24 52 20 13

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
