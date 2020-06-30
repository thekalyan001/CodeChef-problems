/*Sample Input:

hippo

Sample Output:

4
*/

#include<bits/stdc++.h>
using namespace std;
int countString(string s)
{
	unordered_map<char,int>m;
	for(int i=0;i<s.length();i++)
	{
		m[s[i]]++;
	}
	return m.size();
}
int main()
{
	string s;
	cin>>s;
	cout<<countString(s);
	return 0;
}
CodeChef-problems/practice/Peer/1)Do Me. Count the Distinct character in the string