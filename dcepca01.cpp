#include<iostream>
using namespace std;
int main(){
    int t,n,a1,a2,r,i;
    cin>>t;
    while(t--){
        cin>>n;
        int sum[n];
        int carry=0;
        for(i=n-1;i>=0;i--){
            a1=4;
            if(i>2 && (i%4==0 || i%4==3))
                a1=7;
            a2=4;
            if(i%4==2 || i%4==3)
                a2=7;
            sum[i] = a1+a2+carry;
            carry=sum[i]/10;
            sum[i]=sum[i]%10;
        }
        if(carry)
            cout<<carry;
        for(i=0;i<n;i++)
            cout<<sum[i];
        cout<<endl;
    }
    system("pause");
    return 0;
}
            
                
        
            
            
                    
            
