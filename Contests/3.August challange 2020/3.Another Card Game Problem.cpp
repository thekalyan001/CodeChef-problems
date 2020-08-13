//https://www.codechef.com/AUG20B/problems/CRDGAME3
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c,r,l;
		cin>>c>>r;
		int count1=0,count2=0;
		if(c>9)
		{
			count1=c/9;//tells averall digit here is 1 but +ve will be 2
			if(c%9!=0)//if dividible by 9 then not do
			count1++;//nut in 1-18 +ve integer digit is 2 like eg-18-(99), eg-10(55,64,46,73..)
		}`
		else if(c<=9)
		{count1++;
		}
		if(r>9)
		{
			count2=r/9;
		if(r%9!=0)
			count2++;
		}
		else if(r<=9)
		{count2++;
		}
		if(count1<count2)
		cout<<0<<" "<<count1<<endl;
	   else if(count1>=count2)
	   cout<<1<<" "<<count2<<endl;
	}
}
