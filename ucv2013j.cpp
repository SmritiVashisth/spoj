#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    long long sum;
    while(1){
        cin>>n;
        if(n==0)
            break;
        else{
            int a[n];
            for(i=0;i<n;i++)
                cin>>a[i];
            sum=0;
            if(n%2)
                i=(n-1)/2;
            else
                i=(n+1)/2;
            for(j=i;j<n;j++)
                sum = sum + a[j];
            cout<<sum<<endl;
        }
    }
    system("pause");
    return 0;
}      
