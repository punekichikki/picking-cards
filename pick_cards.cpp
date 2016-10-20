#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{
int n,c;
long logn int ans=1;
cin>>n;
int count[n];

for(int i=0;i<n;i++)
count[i]=0;
for(int i=0;i<n;i++)
{cin>>c;
count[c]++;}
for(int i=0;i<n;i++)
count[i]+=count[i-1];
for(int i=0;i<n;i++)
{
ans=ans*(count[i]-i)) % 1000000007;
if(count[i] < i)
break;}
}
cout<ans<<endl;
break;

}
