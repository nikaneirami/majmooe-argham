#include <iostream>
using namespace std;
int main ()
{
int mark[7];
string name[7];
for(int i=0;i<=6;i++)
{
	cout<<"please enter students name";
    cin>>name[i];
    cout<< " please enter the mark";
    cin>>mark[i];
	}	
for(int i=0;i<=6;i++)
{
	if(mark[i]<=10 )
	cout<<name[i]<<":\t"<<mark[i]<<endl;
}
	
	return 0;
}
