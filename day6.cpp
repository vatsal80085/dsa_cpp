#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    switch(num){
        case 1:
            cout<<"bits and clips"<<endl;
            cout<<"clips and bits"<<endl;
            break;
        case 2:
            cout<<"bits of paper"<<endl;
            break;
        case 3:
            cout<<"paper clips"<<endl;
            break;
        default:
            cout<<"go away!"<<endl;
    }

    return 0;
}