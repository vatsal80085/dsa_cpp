#include<iostream>
using namespace std;
//linear search

bool search(int arr[], int size, int key){
    for(int i=0;i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    
    return 0;
}

int sumArray(int arr[], int size){
    int sum=0;
    for(int i = 0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}

void reverseArray(int arr[], int size){
    int start= 0;
    int end= size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }


}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int main(){

    int arr[10]= {2, 23, 0, 43, 43, 21, 32, -23, 46, 65};
    int brr[9]= {2, 23, 0, 43, 21, 32, -23, 46, 65};
    //whether 2 is present or not 
    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;

    bool found = search(arr, 10, key);
    cout<<found<<endl;

    cout<<sumArray(arr, 10)<<endl;
    
    printArray(arr,10);
    reverseArray(arr,10);
    printArray(arr,10);

    printArray(brr,9);
    reverseArray(brr,9);
    printArray(brr,9);

    return 0;
}
