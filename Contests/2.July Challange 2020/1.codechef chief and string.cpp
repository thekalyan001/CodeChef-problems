#include<bits/stdc++.h>
#include<math.h>
int main()
{
long t;//abs
	scanf("%ld",&t);
	while(t--)
	{
	long n,sum=0;
		scanf("%ld",&n);
		long a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		for(int i=0;i<n-1;i++)
		{if(a[i+1]>a[i])
		{
			sum+=abs((a[i+1]-a[i])-1);
		}
		else 
		{
			sum+=abs((a[i]-a[i+1])-1);
		}
		
		}
	
		printf("%ld\n",sum);
	}
	return 0;
}
