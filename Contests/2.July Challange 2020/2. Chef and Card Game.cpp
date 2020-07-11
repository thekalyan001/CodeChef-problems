//Home » Compete » July Challenge 2020 Division 2  » Chef and Card Game
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t;
	scanf("%ld",&t);
	while(t--)
	{long count1=0,count2=0;
		long n;
		scanf("%ld",&n);
	long h=0,k=0;
		for(int i=0;i<n;i++)
		{
			long a,b;//a-chief   b-morty
			scanf("%ld %ld",&a,&b);
			{long sum1=0,sum2=0;
				while(a!=0)
				{
				sum1+=a%10;
				a=a/10;
				}
				while(b!=0)
				{
				sum2+=b%10;
				b=b/10;
				}
//	cout<<sum1<<" "<<sum2<<endl;
				{
					if(sum1>sum2){count1++;h++;}
					else if(sum1<sum2){count2++;k++;}
					else if(sum1==sum2){count1++;count2++;h++,k++;}
				}
			}
		}
		if(count1>count2){cout<<0<<" "<<h<<endl;}
		else if(count2>count1){cout<<1<<" "<<k<<endl;}
		else if(count1==count2){cout<<2<<" "<<h<<endl;}
	}
	return 0;
}
