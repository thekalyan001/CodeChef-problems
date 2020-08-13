https://www.codechef.com/AUG20B/problems/LINCHESS
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,ddd=0;
    cout<<"enter the  nuber\n";
    scanf("%d",&t);
    while(t--)
    {
        int n,k,y=0;
        scanf("%d%d",&n,&k);
        int p[n],test[n];
        for(int j=0;j<n;j++)    
        scanf("%d",&p[j]);
        sort(p,p+n);
        int z=k/2;
        for(int i=0;p[i]<=z;i++)
        {
            ddd=0;
            int chances=0;
            int numm = p[i];
            while (numm<k)
            {
                numm+=p[i];
                chances++;
                if(numm==k)
                {
                    test[y++]=p[i];
                    break;
                }
                /* code */
            }
            
        }
        if(y>=1)
        {
            sort(test, test + y);
            printf("%d\n", test[y - 1]);
        }
        else
        {
            printf("-1\n");
        }
        
    }
}
