// #include<iostream>
// using namespace std;

// int main(){
//     int a=9,b=7;
//     cout<<"a&b = "<<(a&b)<<endl;
//     cout<<"~a = "<<(~a)<<endl;
//     cout<<"a|b = "<<(a|b)<<endl;
//     cout<<"a^b = "<<(a^b)<<endl;
//     cout<<(17>>1)<<endl;
//     cout<<(17>>2)<<endl;
//     cout<<(19<<1)<<endl;
//     cout<<(21<<2)<<endl;

//     int i= 7;
//     cout<<(++i)<<endl;
//     cout<<(i++)<<endl;
//     cout<<(i--)<<endl;
//     cout<<(--i)<<endl;


//     return 0;
// }

//print 1 to n numbers and their sum
// #include<iostream>
// using namespace std;
// int main(){
//     //for loops in c++
//     int n;
//     cin>>n;
//     int sum=0;
//     for (int i = 1; i <= n; i++)
//     {
//         /* code */
//         cout<<i<<endl;
//         sum=sum+i;

//     }
// cout<<sum;
//     return 0;
// }

//fibonacci
// #include<iostream>
// using namespace std;
// int main(){
//     int n=0;
//     cin>>n;
//     int a=0;
//     int b=1;
//     cout<<a<<" "<<b;
//     for(int i=1;i<=n;i++){
//         int nxtnmbr=a+b;
//         a=b;
//         b=nxtnmbr;
//         cout<<nxtnmbr<<" ";
//     }
//     return 0;
//}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isPrime=1;
    for(int i =2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==0){
        cout<<"Number is not prime";
    }
    else{
        cout<<"Number is prime";
    }

}
