#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,i,n,index,max,maxindex,temp;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                index=i;
                break;
            }
        }
        max = a[index+1];
        maxindex = index + 1;
        for(i=n-1;i>=index;i--){
            if(a[i]>a[index] && max>a[i]){
                max=a[i];
                maxindex=i;
            }
        }
        cout<<index<<" "<<maxindex<<endl;
        int temp = a[index];
        a[index] = a[maxindex];
        a[maxindex] = temp;
        sort(a+index+1,a+n);
        for(i=0;i<n;i++)
            cout<<a[i];
        cout<<endl;
    }
    system("pause");
    return 0;
}
