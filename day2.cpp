#include <iostream>
using namespace std;

int main()
{
    // int a;
    // cin >> a;//taking user input
    // conditionals
    // if (a > 0)
    // {
    //     /* code */
    //     cout << "a is positive" << endl;
    // }
    // else
    // {
    //     cout << "a is negative" << endl;
    // }
    /*int a,b;
    cin >> a >> b;//takes user input first for value of a then b
    if(a>b){

        cout<<"a is greater";
    }
    else if (a==b)
    {

        cout<<"a is equal to b";
    }
    else{
        cout<<"b is greater";
    }
    */
    //    char ch;
    //    cin >> ch ;
    //    int temp=int(ch);
    //    if (temp>=97 && temp<=122)
    //    {
    //     /* code */cout<<"this is lowercase";
    //    }
    //    else if (temp>=65 && temp<=90)
    //    {
    //     /* code */cout<<"this is uppercase";
    //    }
    //    else{
    //     cout<<"this is numeric";
    //    }

    // while loops
    // print no.s in a given range
    // int c = 10;
    // // cin>>c ;
    // while (/* condition */ c < 90)
    // {
    //     /* code */ cout << c << endl;
    //     c = c + 1;
    // }

    // sum of n numbers
    //  int n;
    //  cin>> n;
    //  int i=1;
    //  int sum=0;
    //  while(i<=n){

    //      sum=sum+i;
    //      i=i+1;
    //  }
    //  cout<<sum;

    // sum of n even no.s
    //  int n;
    //   cin>> n;
    //   int i=1;
    //   int sum=0;
    //   while(i<=n){
    //      if (i%2==0){
    //       sum=sum+i;
    //      //i=i+1;
    //   }
    //    i=i+1;
    //   }
    //   cout<<sum;

    // int f, c;
    // cout<<"Enter temperature in celsius"<<endl;
    // cin>>c;
    // f=1.8*c+32;
    // cout<<"Temperature in fahrenhiet\n"<<f<<endl;

    //prime no. 
    int n, i = 2;
    cin >> n;
    while (i < n)
    {
        //divide hogya ,not prime
        if(n%i==0){
            cout<<"not prime for "<<i<<endl;
        }
        else{
            cout<<"prime for "<<i<<endl;
        }
    i=i+1;
    }
    return 0;
}