#include<iostream>
using namespace std;


int sum(int a=0,int b=0){
    return a+b;
}

char anything(){
    char ch;
    ch='s';
    return ch;
}

int power(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int iseven(){
    int a;
    cin>>a;
    if(a%2==0){
        return 1;
    }
    return 0;
    }

int factorial(int n){
    int fact= 1;
    for(int i =1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

//function declaration
int nCr(int n, int r){
    //function body
    int numerator = factorial(n);
    int denominator = (factorial(r))*factorial((n-r));
    int output=numerator/denominator;
    return output;
}

void printCount(int n){
    int count=0;        
    int i=1 ;

    while(n!=0){
        int digit = n/i;
        if(digit==0)
            break;
        n= n/10;
        count++;
        }
    cout<< count;
}

//1 -> prime
//0 -> not prime
bool isPrime(int n){
    bool prime=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
            }
    }
    return 1;
}

int main(){
    
        int n;
        cin>>n;
        //function calling
        int answer= isPrime(n);
        cout<<answer<<endl;
    //int ans = sum(8,10);
    //cout<<ans<<endl;
    //cout<<iseven()<<endl;
    //cout<<power()<<endl;

    // int n,r;
    // cin>>n>>r;
    // int result= nCr(n,r);
    // cout<<result<<endl;
    // int n;
    // cin >>n;
    printCount(n);
    return 0;
}