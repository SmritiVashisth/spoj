#include<iostream>
using namespace std;
int main(){
    int n,i,ans;
    while(1){
        cin>>n;
        if(n==0)
            break;
        i=1;
        ans=0;
        while(i<=n){
            i=i*2;
            ans++;
        }
        cout<<ans-1<<endl;
    }
    system("pause");
    return 0;
}    
