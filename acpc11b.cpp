#include<iostream>
using namespace std;
int main(){
    int t,n,m,i,min,j,temp;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        int b[m];
        for(i=0;i<m;i++)
            cin>>b[i];
        min=1000000;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i]>b[j]){
                    temp=a[i]-b[j];
                    if(min>temp)
                        min=temp;
                }
                else{
                    temp=b[j]-a[i];
                    if(min>temp)
                        min=temp;
                }
            }
        }
        cout<<min<<endl;
    }
    system("pause");
    return 0;
}
