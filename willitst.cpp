#include<iostream>
using namespace std;
int main(){
    unsigned long long number;
    cin>>number;
    while(number>1){
        if(number%2!=0){
            break;
        }
        else{
            number=number/2;
        }
    }
    if(number==1){
        cout<<"TAK"<<endl;
    }
    else{
        cout<<"NIE"<<endl;
    }
}
        
