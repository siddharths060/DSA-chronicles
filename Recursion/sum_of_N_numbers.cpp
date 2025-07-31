#include<iostream>
using namespace std;

int sum(int n){
    // state is n
    // what is the simplest sol : sum(0) = 0 
    // sum(1) = 1 or 1 + sum(0)
    // sum(2) = 2 + sum(1)
    // base case
    if(n == 0 || n == 1){
        return n;
    }
    //transition function:

    return n + sum(n-1);
}


int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}