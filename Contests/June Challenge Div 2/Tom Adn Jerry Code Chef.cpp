//https://www.codechef.com/JUNE20B/problems/EOEO
#include <iostream>
using namespace std;
class tomjerry
{
	public:
		void getdata();
};
void tomjerry::getdata()
{
	unsigned long long int ts,js=1,test=0;
	scanf("%llu",&ts);
		if(ts%2==0&&js%2!=0)
		{
			js++;
		}
		for(;ts%2==0&&js%2==0;)
		{
			ts=ts/2;
			js=js/2;
			if(js%2!=0)
			{
				js++;
			}
		}
		if(ts%2!=0)
		{
			if(js%2!=0)
			{
				js++;
			}
			if(js<=ts&&js%2==0)
			{
				test=ts/js;
			}
			
		}
	printf("%llu\n",test);
}
int main()
{
	tomjerry fight;
	int testcases;
	scanf("%d",&testcases);
	while(testcases--)
	fight.getdata();
}