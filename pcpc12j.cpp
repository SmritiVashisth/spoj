#include<iostream>
using namespace std;
int main(){
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        unsigned int a[n];
        int max=0;
        int b[101]={0};
        bool status = false;
        for(i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        for(i=1;i<=100;i++){
            if(b[i]>max && b[i]%i==0){
                max = b[i];
                j=i;
                status = true;
            }
        }
        if(status)
        	cout<<j<<endl;
        else
        	cout<<-1<<endl;
    }
    return 0;
}
