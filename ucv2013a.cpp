#include<iostream>
using namespace std;
int main(){
    long long n,l,sum,product,j;
    int m = 1000000007;
    while(1){
        cin>>n>>l;
        if(n==0 && l==0)
            break;
        else{
            if(n==1)
                cout<<1<<endl;
            else{
                 sum=0;
                 product=1;
                 for(j=1;j<l+1;j++){
                     product=(n*product)%m;
                     sum = (sum + product)%m;
                 }
                 cout<<sum<<endl;
            }    
        }
    }
    system("pause");
    return 0;
}
