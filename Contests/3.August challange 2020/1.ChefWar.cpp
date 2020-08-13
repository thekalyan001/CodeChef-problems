//https://www.codechef.com/AUG20B/problems/CHEFWARS
#include<iostream>
using namespace std;
int war(int a,int b)
{
	while(1)
	{
		  a=a-b;
		  b=b/2;
		 if(a<=0)
	{return 1;
	}
	else if(b<=1 && a>b)
	{return 0;
	}
	
	}

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int p,h;
	cin>>p>>h;
	cout<<war(p,h)<<endl;
}
	return 0;
}
