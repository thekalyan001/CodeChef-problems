//https://www.codechef.com/JUNE20B/problems/EVENM

#include <iostream>
using namespace std;
class even
{
	public:
		void getdata();
};
void even::getdata()
{
	int n;
	scanf("%d",&n);
		for(int j=1;j<=n*n;j++)
		{
			printf("%d ",j);
			if(j%n==0)
			{
				printf("\n");
				int k=j+n;
				for(;k>j;k--)
				{
					if(k<=n*n)
					printf("%d ",k);
				}
				j=j+n;
				if(j%n==0)
				printf("\n");
			}
		}
	
}
int main()
{
	even matrix;
	int testcases;
	scanf("%d",&testcases);
	while(testcases--)
	matrix.getdata();
}