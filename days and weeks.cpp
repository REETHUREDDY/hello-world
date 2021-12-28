#include<iostream>
using namespace std;
int main()
{
	int days,n,N;
	cout<<"enter the no of days";
	cin>>days;
	if(days>0)
	{
		n=days/7;
		cout<<"no of weeks"<<n<<" ";
		N=days%7;
		cout<<"no of days left"<<N;
	}
	return 0;
}
