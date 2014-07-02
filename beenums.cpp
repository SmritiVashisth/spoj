#include<iostream>
using namespace std;
int main(){
    unsigned int n,sum;
    while(1){
        cin>>n;
        if(n==-1)
            break;
        else{
            sum = 1;
            int i=1;
            while(sum<n){
                sum = sum + 6*i;
                i++;
            }
            if(sum==n)
                cout<<"Y"<<endl;
            else
                cout<<"N"<<endl;
        }
    }
    system("pause");
    return 0;
}
