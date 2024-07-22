//time complexity and space complexity introduction
//how to avoid TLE using 10^8 rule
#include<iostream>
using namespace std;

//binary search 1
//binary search works only on monotonic function i.e., either sorted ascending or descending

int binarySearch(int arr[], int size, int key){

    int start=0;
    int end=size-1;
    //int mid=(start+end)/2;
    int mid= start + (end-start)/2; // optimization 1

    while(start<=end){

        if(arr[mid]==key){
           return mid; 
        }

        //go to right wala part
        if(arr[mid] < key){
            start= mid+1;
        }
        else{//key<arr[mid]
             end = mid - 1;
        }
        //mid=(start+end)/2;
        mid= start + (end-start)/2;//optimisation 1

    }    
    return -1;
}


int main(){
    int even[8] = {2,4,6,8,10,12,14,18};
    int odd[5] = {1,3,5,11,15};

    int index = binarySearch(even, 8, 12);
    cout<<"Index of 12 is "<< index <<endl;

    index = binarySearch(odd, 5, 12);
    cout<<"Index of 12 is "<< index <<endl;

    return 0;
}