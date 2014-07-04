#include<iostream>
using namespace std;
int main(){
    string value;
    int col,row,i,j,index;
    while(1){
        cin>>col;
        if(col==0)
            break;
        else{
            cin>>value;
            int size = value.size();
            row = size/col;
            char a[row][col];
            j=0;
            index=0;
            for(i=0;i<row;i++){
                if(i%2==0){
                    for(j=0;j<col;j++){
                        a[i][j]=value[index];
                        index++;
                    }
                }
                else{
                    for(j=col-1;j>=0;j--){
                        a[i][j]=value[index];
                        index++;
                    }
                }
            }
            for(j=0;j<col;j++){
                for(i=0;i<row;i++)
                    cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    system("pause");
    return 0;
}
