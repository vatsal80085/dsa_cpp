#include<iostream>
using namespace std;

void swapAlter(int arr[], int size){
    for(int i=0;i<size;i=i+2){
        if((i+1)<size){
            swap(arr[i], arr[i+1]);
        }
    }
}

//since we cannot print array directly in c++ we first create printArray fn 
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

// #include <bits/stdc++.h> 
// vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
// 	// Write your code here.
// 	vector<vector<int>> ans;
// 	for(int i=0;i<n;i++){
// 		for(int j=1;j<n;j++){
// 			for(int k=2;k<n;k++){
// 				if(arr[i]+arr[j]+arr[k]==K){
// 					vector<int> temp;
// 					temp.push_back(arr[i]);
// 					temp.push_back(arr[j]);
// 					temp.push_back(arr[k]);
            		
//             		ans.push_back(temp);
// 				}
// 			}
// 		}
// }

void sortOne(int arr[], int n){

    int left = 0, right = n-1;
    while(left<right){

        while(arr[left] == 0 && left < right){
            left++;
        }

        while(arr[right] == 1 && left < right){
            right--;
        }
   
        //if the program has reached here it implies that arr[left]==1 and arr[right]==0

        if(left>right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main(){

    // int arr[6]={2,3,5,85,32,23};
    // int brr[7]={2,4,7,3,11,9,33};
    int arr1[8]={1,0,0,0,1,0,1,0};
    // swapAlter(arr,6);
    // swapAlter(brr,7);
    // printArray(arr,6);
    // printArray(brr,7);
    sortOne(arr1,8);
    printArray(arr1,8);
    return 0;
}