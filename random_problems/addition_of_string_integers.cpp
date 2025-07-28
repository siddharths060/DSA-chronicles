/*
given two non negative integers(ie, they are positive), num1 & num2 represented as strings
return the sum of num1 and num2 as strings


you must solve the problem without using builtin library for handling large numbers(such as BigIntegers), you must also not
convert the inputs directly


ex:
Example 1 : 
input : num1 = "11"
        num2 = "123"
        res = "134"

Example 1 : 
input : num1 = "456"
        num2 = "123"
        res = "533"

Example 1 : 
input : num1 = "0"
        num2 = "0"
        res = "0"

constraints 
1 <= nums1.length, nums2.length <= 10^4
num1 and num2 contains only digits
num1 and num2 dont have any leading zeros except for zero itself
    

*/ 

// approach1 :  how does addition work? 
    // add two nums(digits) if it is greater than or equal to the base(10), then carry is generated(use % operator) else carry is 0



#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


string result_of_add(string num1, string num2){
    int i = num1.length() -1;
    int j = num2.length() -1;
    string result = "";
    int carry = 0;


    while(i >= 0 || j >= 0|| carry ){
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
    
        result += (sum % 10) + '0';
        i--;
        j--;
    }
    reverse(result.begin(),result.end());
    return result;
}


int main(){
    string num1 , num2;
    cin>>num1>>num2;

    cout<<result_of_add(num1,num2);
    return 0;

}