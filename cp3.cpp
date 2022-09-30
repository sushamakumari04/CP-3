/*3. Peak Index in a Mountain Array

Problem Statement:
An array arr a mountain if the following properties hold:
arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr , return the index i such that arr[0] < arr[1] < ... < arr[i -
1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] .
You must solve it in O(log(arr.length)) time complexity.*/

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"enter the number in the array"<<endl;
for(int i=0;i<n;i++)
{
 cin>>arr[i];
}
for(int i=0;i<n;i++)
{
 if(arr[i]<arr[i+1])
    {
     continue;
    }
 else
    {
      cout<<i;
      break;
    }
}
return 0;
}
