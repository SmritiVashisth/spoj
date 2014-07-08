#include<iostream>
using namespace std;
int gcd(int num1,int num2){   
    int min1,max1;
    if(num1>=num2){
        max1=num1;
        min1=num2;
    }
    else{
        max1=num2;
        min1=num1;
    }
    if(min1==0)
        return (max1);
    else
        return(gcd(min1,max1%min1));
}    
int main(){
    int t,a,b,i;
    cin>>t;
    while(t--){
        cin>>a>>b;
        i = gcd(a,b);
        cout<<b/i<<" "<<a/i<<endl;
    }
    system("pause");
    return 0;
}
        
