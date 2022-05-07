//Chef and Coupon
#include <iostream>
using namespace std;
int cost(){
    int cost1,cost2,cost3;
	cin>>cost1>>cost2>>cost3;
	return cost1+cost2+cost3;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int cp,dil,dil1,cp1;
	    cin>>dil>>cp;
	    cp1=cp;
	    dil1=dil+dil;
	    int day1,day2;
	    day1=cost();
	    day2=cost();
	    
	    if(day1<150)
	    cp1+=dil;
	    if(day2<150)
	    cp1+=dil;
	    if(cp1<dil1)
	    cout<<"YES"<<"\n";
	    else
	    cout<<"NO"<<"\n";
	    }
	return 0;
}
