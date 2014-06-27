#include <iostream>
using namespace std;
int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		float x, max, max2, min, min2;
	    cin>>x;
	    max=x;
	    max2=x;
	    min=x;
	    min2=x;
	    n--;
		while(n--){
			cin>>x;
			if(x>max){
			    max2=max;
			    max=x;
            }
            else if(x<max && x>max2)
                 max2=x;
            else if(x>min && x<min2)
                 min2=x;
            else if(x<min){
                 min2=min;
                 min=x;
            }
		}
		if((min + min2)>=2 || (max + max2)<=1)
		    cout<<"not found"<<endl;
		else
		    cout<<"found"<<endl;
	}
}
