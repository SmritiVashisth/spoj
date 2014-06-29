#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,n,count,i,max,j,k;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        if(n==1)
            max=2;
        else{
            sort(a,a+n);
            max=1;
            count=0;
            for(i=0;i<n-1;i++){
                if(a[i]==a[i+1]){
                    k=a[i];
                    for(j=i+2;j<n;j++){
                        if(a[j]!=k)
                            break;
                    }
                    count = j-i;
                    i=j-1;
                }
                if(count>max){
                    max=count;
                    cout<<max<<endl;
                }
            }
        }
        if(max>=(n/2+1))
            cout<<0<<endl;
        else
            cout<<n/2+1-max<<endl;
    }
    system("pause");
    return 0;
}
