#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,c,d,n1,n2,n3,n4;
		long long ans = 0;
		cin>>n;
		n1 = sqrt(sqrt(double(n)));
		for(d=0;d<=n1;d++){
			n2 = n - d*d*d*d;
			n3 = pow(n2,1.0/3) + 1;
			for(c=0;c<=n3;c++){
				n4 = n2 - c*c*c;
				if(n4>=0)
				    ans = ans + sqrt(double(n4)) + 1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
