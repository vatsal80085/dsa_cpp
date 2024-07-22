// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     //decimal to binary conversion
//     int n;
//     cin>>n;
//     int i=0;
//     int ans=0;
//     while(n!=0){
//         int bit = n&1;
//         ans=(bit * pow(10,i))+ans;
//         n=n>>1;
//         i++;
//     }
//     cout<<ans<<endl;

//     return 0;
// }

//reverse integer leetcode
#include<iostream>
#include <climits> // makes INT_MIN and INT_MAX usable in github codespace
using namespace std;
int main(){
    int n;
    cin>>n;
    int digit=0, ans=0;
    while(n!=0){
        digit=n%10;
        if((ans<(INT_MIN/10))||(ans>(INT_MAX/10))){
            return 0;
        }
        ans=(ans*10)+digit;
        n=n/10;
    }
    return 0;
}