#include<iostream>
using namespace std;
int main(){
    int t,n,odd,even,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        odd=0;
        even=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(i%2)
                odd=odd+a[i];
            else
                even=even+a[i];
        }
        if(n%2)
            cout<<"YES"<<endl;
        else if(odd==even)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    system("pause");
    return 0;
}
            
