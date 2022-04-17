#include <iostream>
using namespace std;

int main()
 {
 	int n,a,sum=0;
 	cout<<"please enter your number";
 	cin>>n;
 while(n!=0)
 {
 	a=n%10;
 	sum=sum+a;
 	n=n /10;
 }
	 cout<<sum<<endl;
	return 0;
}
