#include<iostream>
using namespace std;

//solve for first and last occurence of an element in a given array
int first_occ(int arr[], int n, int k){
    int start = 0;
    int e=n-1;
    int ans=-1;
    int mid= start +(e-start)/2;

    while(start <= e){

        if(arr[mid]==k){
            ans= mid;
            e = mid - 1;
        }
        else if(k > arr[mid]){ //Right mein jao
            start= mid+1;
        }
        else if(k < arr[mid]){//left mein jao
            e= mid-1;
        }
       mid= start +(e-start)/2;
    }
    return ans;
}

int last_occ(int arr[], int n, int k){
    int start = 0;
    int e=n-1;
    int ans=-1;
    int mid= start +(e-start)/2;

    while(start <= e){

        if(arr[mid]==k){
            ans= mid;
            start = mid + 1;
        }
        else if(k > arr[mid]){ //Right mein jao
            start= mid+1;
        }
        else if(k < arr[mid]){//left mein jao
            e= mid-1;
        }
       mid= start +(e-start)/2;
    }
    return ans;
}

int main(){

    int even[5]={1,2,3,3,5};
    cout<<"First occurence of 3 is at index "<< first_occ(even,5, 3)<<endl;
    cout<<"Last occurence of 3 is at index "<< last_occ(even,5, 3)<<endl;
    int last= last_occ(even, 5, 3);
    int first=first_occ(even, 5, 3);
    int total=0;
    if(first==-1 && last==-1){
        total=0;
    }
    else{
        total= (last-first)+1;
    }
    cout<<"total occurence of 3 is "<<total;


    return 0;
}