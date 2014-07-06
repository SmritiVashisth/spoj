#include<iostream>
using namespace std;
int main(){
    int n,count,a,c,b,d,i;
    while(1){
        cin>>n;
        if(n==-1)
            break;
        else if(n==1)
            cout<<1<<endl;
        else{
            count=0;
            for(a=1;a<=n;a++){
                i = (n/a<a) ? n/a : a;
                for(b=1;b<=i;b++){
                    if((n - a*b)%(a+b)==0){
                        c = (n - a*b)/(a+b);
                        if(c<=b)
                            count++;
                    }
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
