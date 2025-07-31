/*
    write a function that takes two inputs n and m
    outputs the no of unique paths from top left corner to the bottom right corner of  a n x m grid
    constraints : you can only move down or right only one unit at a time 
*/


#include<iostream>

using namespace std;

int grid_path(int n, int m){
// base case : grid_path(1,1) = 1
// grid_path(1,m) = 1 , grid_path(n,1) = 1
if(m == 1 || n == 1){
    return 1;
} 
return grid_path(n-1,m) + grid_path(n,m-1);

}


int main(){
    int m , n;
    cin>>n>>m;
    cout<<grid_path(n,m);
    return 0;
}