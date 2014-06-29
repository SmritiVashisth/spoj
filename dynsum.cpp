#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int max=a[0];
    int max_start=0,max_end=0;
    int sum=a[0];
    int t=0;
    for(i=1;i<n;i++){
        if(sum>0)
            sum=sum+a[i];
        else{
            sum=a[i];
            t=i;
        }
        if(sum>max){
            max_start=t;
            max_end=i;
            max=sum;
        }
    }
    cout<<max_start<<" "<<max_end<<" "<<max<<endl;
    system("pause");
    return 0;
}
