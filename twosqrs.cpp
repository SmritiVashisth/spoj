#include<iostream>
using namespace std;
int main(){
    int t,count;
    long long n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int val=1;
        for(i=2;i*i<=n;i++){
                count=0;
                while(n%i==0){
                    count++;
                    n=n/i;
                }
                if(i%4==3 && count%2){
                    val=0;
                    break;
                }
        }
        if(n%4==3)
            val=0;
        if(val)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
