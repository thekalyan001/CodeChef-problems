//https://www.codechef.com/JUNE20B/problems/CHFICRM
#include <iostream>
using namespace std;
class icecream
{
	public:
		int getdata();
};
int icecream::getdata()
{
	int n,revenue=0,coin5=0,coin10=0,coin15=0;
	scanf("%d",&n);
	int people[n];
	for(int i=0;i<n;i++)
	scanf("%d",&people[i]);
	for(int j=0;j<n;)
	{
		if(people[0]!=5)
		{
			cout<<"NO"<<endl;
			break;
		}
		if(people[j]==5)
		{
			revenue=revenue+people[j];
			coin5++;
			j++;
		}
		if(people[j]==10)
		{
			
			if(coin5>=1)
			
			{
				coin5--;
				coin10++;
				revenue=revenue+5;
				j++;
			}
			else if(coin5<=0)
			{
				cout<<"NO"<<endl;
				break;
			}
		}
		if(people[j]==15)
		{
			if(coin10>=1)
			{
				coin10--;
				coin15++;
				revenue=revenue+5;
				j++;
			}
			else if(coin5>=2)
			{
				coin5-=2;
				coin15++;
				revenue=revenue+5;
				j++;
			}
			else if(coin5<2&&coin10<1)
			{
				cout<<"NO"<<endl;
				break;
			}
		}
		if(j>=n)
		cout<<"YES"<<endl;
	}
}
int main()
{
	icecream shop;
	int testcases;
	scanf("%d",&testcases);
	while(testcases--)
	shop.getdata();
}