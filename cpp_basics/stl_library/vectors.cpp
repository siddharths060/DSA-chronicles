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

    return 0;
}