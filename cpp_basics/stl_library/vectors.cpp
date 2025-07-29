/*
Vectors are sequence containers representing arrays that can change in size.

vectors use contiguous storage locations for their elements, which means that their elements can also be accessed using offsets on regular pointers to its elements, and just as efficiently as in arrays. But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.

vectors use a dynamically allocated array to store their elements.

if the size need to be increased, then a new vector of double the size is created and the values of elements (from previous) are copied into the new vector
if the size need to be decreased, then a new vector of half the size is created and the values of elements(from previous) are copied into the new vector


*/

#include<iostream>
#include<vector>

using namespace std;

int main(){

    // size() returns the size of the vector
    vector<int> arr = {1,2,3};
    cout<<arr.size()<<endl;

    //empty() returns false if size of vector is 0 else returns true
    cout<<arr.empty()<<endl;

    // accessing the elements 
    // [] operator can be used to access the elements, the indexes start from 0
    cout<<arr[0]<<endl;
    // at() can be used to access the element at that perticular position
    cout<<arr.at(2)<<endl;
    // front() returns the first element of the vector
    cout<<arr.front()<<endl;

    // back() returns the last element of the vector
    cout<<arr.back()<<endl;

    // rbegin() returns the iterator to the last element
    cout<<*arr.rend()<<endl;

    // rend() returns the iterator to the first element
    cout<<*arr.rbegin()<<endl;
    // modifiers
    // push_back() adds elements to the last or end of the vector
    arr.push_back(20);
    cout<<arr.back()<<endl;
    // pop_back() deletes elements from the last 
    
    arr.pop_back();
    cout<<arr.back()<<endl;
    // insert(pos,val) returns an iterator to the begining of the new vector
    arr.insert(arr.begin(), 500);
    cout<<arr.front()<<endl;
    // erase() removes either a single element erase(iterator to that position) or a range of elements erase([first,last])
    arr.erase(arr.begin());
    cout<<arr.front()<<endl;
    // clear() removes all the elements from the vector
    arr.clear();
    cout<<arr.empty()<<endl;

    return 0;
}